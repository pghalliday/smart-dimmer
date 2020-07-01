#pragma once

#include <functional>
#include <BurpTree/Subscriber.hpp>

namespace BurpDimmer {
  namespace ConfigFile {

    class Interface : public BurpTree::Subscriber {

      public:

        using f_withObj = std::function<void(const JsonObject & object)>;

        virtual void read(f_withObj withObj) = 0;

    };

  }
}
