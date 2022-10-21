/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#include "stdio.h"
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "adafruit_qtpy_rp2040.h"

#define PICO_PIN 22

int main() {
const uint LED_PIN = PICO_PIN;
gpio_init(LED_PIN);
gpio_set_dir(LED_PIN, GPIO_OUT);
stdio_init_all();
int led=0;
    while (true) {
            gpio_put(LED_PIN, 0);
            printf("LEDs Turned OFF!\n"); 
            sleep_ms(250);
            gpio_put(LED_PIN, 1);
            printf("LEDs Turned ON!\n");
            sleep_ms(250);
        }
    }