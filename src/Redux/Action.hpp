#ifndef Redux_Action_hpp
#define Redux_Action_hpp

namespace Redux {

  template <class ActionType>
  class Action {

    public:

      ActionType type;

      Action(ActionType type) :
        type(type) {
      }

      template <class T>
      const T & as() const {
        return static_cast<const T &>(*this);
      }

  };
}

#endif
