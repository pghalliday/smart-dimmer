#pragma once

#include <BurpRedux/Subscriber.hpp>
#include "../Config/Light/State.hpp"
#include "Store.hpp"
#include "Config.hpp"

namespace BurpDimmer {
  namespace Light {

    class ConfigSubscriber : public BurpRedux::Subscriber<Config> {

      public:

        ConfigSubscriber(Store & store);
        void onPublish(const Config * config) override;

      private:

        Store & _store;

    };

    extern ConfigSubscriber * configSubscriber;
    void initConfigSubscriber(Store & store);
    void deinitConfigSubscriber();

  }
}
