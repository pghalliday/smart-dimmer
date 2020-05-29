#!/bin/sh

. tmux-constants.sh

command() {
  tmux send-keys "$1" Enter
}

quad_window() {
  tmux new-window -n $1
  command "tail -f logs/$1.1.log"
  tmux split-window -v
  command "tail -f logs/$1.0.log"
  tmux split-window -h
  command "tail -f logs/$1.3.log"
  tmux select-pane -t 0
  tmux split-window -h
  command "tail -f logs/$1.2.log"
}

if ! tmux has-session -t $SESSION; then
  tmux new-session -d -s $SESSION -n $CODE
  command "vim README.md"
  tmux split-window -h
  tmux split-window -v
  quad_window $MONITOR
  quad_window $UPLOAD
  quad_window $UPLOADFS
  tmux select-window -t $CODE
fi

tmux attach -t $SESSION
