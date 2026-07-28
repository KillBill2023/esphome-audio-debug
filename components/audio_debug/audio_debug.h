#pragma once

#include "esphome/core/component.h"
#include "esphome/components/microphone/microphone.h"

namespace esphome {
namespace audio_debug {

class AudioDebug : public Component {
 public:
  void setup() override;
  void loop() override;

  void set_microphone(microphone::Microphone *mic) {
    this->microphone_ = mic;
  }

 protected:
  microphone::Microphone *microphone_{nullptr};

  uint32_t last_log_{0};
};

}  // namespace audio_debug
}  // namespace esphome