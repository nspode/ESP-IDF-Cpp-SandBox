#include "led_controller.h"
#include "driver/gpio.h"

LedController::LedController(gpio_num_t gpio) : led_gpio(gpio) {}

void LedController::init() {
    gpio_reset_pin(led_gpio);
    gpio_set_direction(led_gpio, GPIO_MODE_OUTPUT);
}

void LedController::on() {
    gpio_set_level(led_gpio, 1);
}

void LedController::off() {
    gpio_set_level(led_gpio, 0);
}
