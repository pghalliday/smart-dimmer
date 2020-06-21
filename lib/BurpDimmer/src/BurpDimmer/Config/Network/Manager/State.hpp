#pragma once

#include <array>
#include <cstddef>
#include <ArduinoJson.h>
#include "../../../Memory/Pair.hpp"

namespace BurpDimmer {
  namespace Config {
    namespace Network {
      namespace Manager {
        namespace State {

          constexpr char modeField[] = "mode";
          constexpr char accessPointTimeoutField[] = "accessPointTimeout";

          enum PermMode : size_t {
            NORMAL = 0,
            ACCESS_POINT,
            OFF,
            count
          };

          constexpr std::array<const char *, PermMode::count> permModeNames = {
            "normal",
            "accessPoint",
            "off"
          };

          enum class TempMode {
            ACCESS_POINT,
            WPS_CONFIG
          };

          constexpr TempMode defaultTempMode = TempMode::ACCESS_POINT;
          constexpr bool defaultTempModeActive = false;

          struct Params {
            const PermMode permMode;
            const TempMode tempMode;
            const bool tempModeActive;
            const unsigned long accessPointTimeout;
          };

          class Instance {

            public:
              
              const PermMode permMode;
              const TempMode tempMode;
              const bool tempModeActive;
              const unsigned long accessPointTimeout;

              Instance(const Params * params);
              void serialize(JsonObject & object) const;

          };

          using Memory = Memory::Pair<Instance, Params>;
          extern Memory memory;

        }
      }
    }
  }
}
