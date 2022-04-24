#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "sdkconfig.h"

void app_main()
{

    gpio_pad_select_gpio();
    gpio_set_direction(, GPIO_MODE_OUTPUT);
    while(1) {
        gpio_set_level(, 0);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        gpio_set_level(, 1);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
