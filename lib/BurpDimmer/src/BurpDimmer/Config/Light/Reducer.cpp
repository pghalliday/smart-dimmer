#include "Reducer.hpp"
#include "State.hpp"

namespace BurpDimmer {
  namespace Config {
    namespace Light {

      Reducer reducer(State::memory);

      Reducer::Reducer(State::Memory & memory) :
        _memory(memory)
      {}

      const State::Instance * Reducer::reduce(const State::Instance * previous, const Action & action) {
        switch (action.type) {
          case ActionType::LIGHT_SET_STATE: {
            return _memory.create(action.payload<State::Params>());
          }
          default:
            return previous;
        }
      }

    }
  }
}
