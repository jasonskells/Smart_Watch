#include "driver/gpio.h"
#include "esp_log.h"

extern "C" {
static const char *TAG = "MAIN";

void blink() {
    while (true) {
        vTaskDelay(500 / portTICK_RATE_MS);
        ESP_ERROR_CHECK(gpio_set_level(GPIO_NUM_0, 0));
        ESP_ERROR_CHECK(gpio_set_level(GPIO_NUM_1, 0));
        ESP_ERROR_CHECK(gpio_set_level(GPIO_NUM_2, 0));
        ESP_LOGD(TAG, "Switching OFF the LED");
        vTaskDelay(500 / portTICK_RATE_MS);
        ESP_ERROR_CHECK(gpio_set_level(GPIO_NUM_0, 1));
        ESP_ERROR_CHECK(gpio_set_level(GPIO_NUM_1, 1));
        ESP_ERROR_CHECK(gpio_set_level(GPIO_NUM_2, 1));

        ESP_LOGD(TAG, "Switching ON the LED");
    }
}

void app_main() {
    ESP_LOGD(TAG, "Blink Program");

    gpio_pad_select_gpio(GPIO_NUM_0);
    ESP_ERROR_CHECK(gpio_set_direction(GPIO_NUM_0, GPIO_MODE_OUTPUT));

    gpio_pad_select_gpio(GPIO_NUM_1);
    ESP_ERROR_CHECK(gpio_set_direction(GPIO_NUM_1, GPIO_MODE_OUTPUT));

    gpio_pad_select_gpio(GPIO_NUM_2);
    ESP_ERROR_CHECK(gpio_set_direction(GPIO_NUM_2, GPIO_MODE_OUTPUT));
    blink();
}
}