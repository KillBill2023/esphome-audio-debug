#pragma once

#include "esphome/core/component.h"

namespace esphome {
namespace audio_debug {

class AudioDebug : public Component {

 public:

  void setup() override;

  void loop() override;

};

}  // namespace audio_debug
}  // namespace esphome
