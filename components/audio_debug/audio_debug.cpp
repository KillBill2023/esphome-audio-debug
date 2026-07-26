#include "audio_debug.h"

#include "esphome/core/log.h"

namespace esphome {
namespace audio_debug {

static const char *const TAG = "audio_debug";

void AudioDebug::setup() {

  ESP_LOGI(TAG, "Audio Debug started");

}

void AudioDebug::loop() {

}

}
}
