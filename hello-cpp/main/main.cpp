#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#define LOG_LOCAL_LEVEL ESP_LOG_INFO
#include "esp_log.h"


extern "C" void app_main(void)
{
    while(true){
    ESP_LOGI("DEBUG", "Hello C++");
    vTaskDelay(1000 / portTICK_PERIOD_MS);

    }
}