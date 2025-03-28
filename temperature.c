#include "temperature.h"
#include <stdio.h>

float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9.0f / 5.0f) + 32.0f;
}

float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32.0f) * 5.0f / 9.0f;
}

float celsius_to_kelvin(float celsius) {
    return celsius + 273.15f;
}

float kelvin_to_celsius(float kelvin) {
    return kelvin - 273.15f;
}

float fahrenheit_to_kelvin(float fahrenheit) {
    return celsius_to_kelvin(fahrenheit_to_celsius(fahrenheit));
} 

float kelvin_to_fahrenheit(float kelvin) {
    return celsius_to_fahrenheit(kelvin_to_celsius(kelvin));
}

void categorize_temperature(float celsius) {
    if (celsius < 0) {
        printf("Category: Freezing\nAdvisory: Wear heavy winter clothing.\n");
    } else if (celsius < 10) {
        printf("Category: Cold\nAdvisory: Wear a jacket.\n");
    } else if (celsius < 25) {
        printf("Category: Comfortable\nAdvisory: Enjoy the pleasant weather.\n");
    } else if (celsius < 35) {
        printf("Category: Hot\nAdvisory: Stay hydrated and wear light clothing.\n");
    } else {
        printf("Category: Extreme Heat\nAdvisory: Avoid prolonged sun exposure and stay indoors if possible.\n");
    }
}