#include "temperature.h"
#include <stdio.h>

float celsius_to_fahrenheit(float celsius) { //Celsius to Fahrenheit conversion
    return (celsius * 9.0f / 5.0f) + 32.0f;
}

float fahrenheit_to_celsius(float fahrenheit) { //Fahrenheit to Celsius conversion
    return (fahrenheit - 32.0f) * 5.0f / 9.0f;
}

float celsius_to_kelvin(float celsius) { //Celsius to Kelvin conversion
    return celsius + 273.15f;
}

float kelvin_to_celsius(float kelvin) { //Kelvin to Celsius conversion
    return kelvin - 273.15f;
}

float fahrenheit_to_kelvin(float fahrenheit) { //Fahrenheit to Kelvin conversion
    return celsius_to_kelvin(fahrenheit_to_celsius(fahrenheit));
} 

float kelvin_to_fahrenheit(float kelvin) { //Kelvin to Fahrenheit conversion
    return celsius_to_fahrenheit(kelvin_to_celsius(kelvin));
}

void categorize_temperature(float celsius) { //Gives a advisory based on the celsius temperature
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