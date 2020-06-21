#include "Actions.hpp"
#include "Deserialize.hpp"

namespace BurpDimmer {
  namespace Config {
    namespace Network {
      namespace Station {

        void deserialize(const JsonObject & object, f_onState onState) {
          deserialize(object, [&](const Error error, const State::Params * params) {
              onState(State::memory.create(params));
          });
        }

      }
    }
  }
}
