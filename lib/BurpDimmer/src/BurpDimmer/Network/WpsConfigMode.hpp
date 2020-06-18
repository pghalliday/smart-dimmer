#pragma once

#include "./Mode.hpp"

namespace BurpDimmer {
  namespace Network {

    class WpsConfigMode : public Mode {

      public:

        void start() override;
        void stop() override;
        void setup() override;
        void loop() override;
        void notify() override;

    };

  }
}
