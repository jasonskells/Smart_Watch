#include "esp_log.h"
#include "driver/gpio.h"

extern "C"
{
    void app_main()
    {
        static const char *TAG = "MAIN";
        ESP_LOGD(TAG, "Hello World");
    }
}
