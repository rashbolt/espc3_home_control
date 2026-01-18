#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include <esp_log.h>

static const char *TAG = "MAIN";

void app_main(void)
{
    int i = 0;
    while (1)
    {
        ESP_LOGI(TAG,"[%d] Hello World!\n", i);
        ESP_LOGE(TAG,"[%d] Hello World!\n", i);
        i++;
    }
}
