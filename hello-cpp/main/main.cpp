#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

// #define LOG_LOCAL_LEVEL ESP_LOG_INFO
// #include "esp_log.h"

#include "hello.h"
using namespace HELLO;
#include "led_controller.h"


extern "C" void app_main(void)
{
    HelloCpp app;
    int i = 0;
        
    LedController led(GPIO_NUM_5);
    led.init();

    while(true){
    app.run(i++);
    led.on();
    vTaskDelay(100 / portTICK_PERIOD_MS);
    led.off();
    vTaskDelay(100 / portTICK_PERIOD_MS);
    }
}