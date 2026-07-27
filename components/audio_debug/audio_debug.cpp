#include "audio_debug.h"

#include "esphome/core/log.h"

#ifdef USE_ESP32
#include <esp_heap_caps.h>
#endif

namespace esphome {
namespace audio_debug {

static const char *const TAG = "audio_debug";

void AudioDebug::setup() {
  ESP_LOGI(TAG, "Audio Debug started");
}

void AudioDebug::loop() {
  uint32_t now = millis();

  if (now - last_log_ < 10000)
    return;

  last_log_ = now;

#ifdef USE_ESP32
  ESP_LOGI(TAG,
         "Heap: %u bytes, Largest block: %u bytes",
         heap_caps_get_free_size(MALLOC_CAP_8BIT),
         heap_caps_get_largest_free_block(MALLOC_CAP_8BIT));
#endif
}

}  // namespace audio_debug
}  // namespace esphome