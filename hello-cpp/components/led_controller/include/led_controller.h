#ifndef LED_CONTROLLER_H
#define LED_CONTROLLER_H

#include "driver/gpio.h" 

class LedController {
public:
    LedController(gpio_num_t gpio);
    void init();
    void on();
    void off();

private:
    gpio_num_t led_gpio;
};

#endif // LED_CONTROLLER_H
