#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

// #define LOG_LOCAL_LEVEL ESP_LOG_INFO
// #include "esp_log.h"

#include "hello.h"
using namespace HELLO;


extern "C" void app_main(void)
{
    HelloCpp app;
    int i = 0;
        
    while(true){
    app.run(i++);
    vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}