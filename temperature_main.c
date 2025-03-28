#include "temperature.h"
#include <stdio.h>

int main(int argc, char *argv[]){
    printf("Enter Temperature Value: \n"); 
    float temperature;
    scanf("%f", &temperature);//Gets temp value
    printf("Choose Temperature Scale: \n1) Fahrenheit\n2) Celsius\n3) Kelvin\n"); 
    int input;
    scanf("%d", &input); //Gets input
    int input2;
    float target;
    float celsius_temp; //Allows for the weather advisory to be always calculated in Celsius
    if (input == 3 && temperature < 0) { //If invalid temp
        printf("Error: Temperature cannot be below absolute zero\n");
        printf("Enter Temperature Value: \n");
        scanf("%f", &temperature);
    }
    if (input == 2 && temperature < -273.15f) { //If invalid temp
        printf("Error: Temperature cannot be below absolute zero\n");
        printf("Enter Temperature Value: \n");
        scanf("%f", &temperature);
    }
    if (input == 1 && fahrenheit_to_celsius(temperature) < -273.15f) { //If invalid temp
        printf("Error: Temperature cannot be below absolute zero\n");
        printf("Enter Temperature Value: \n");
        scanf("%f", &temperature);
    }

    if (input == 1) { //If Fahrenheit choose the conversion target
        printf("Choose Conversion Target: \n1) Celsius\n2) Kelvin\n");
        scanf("%d", &input2);
        if (input2 == 1) { 
            target = fahrenheit_to_celsius(temperature);
        } else if (input2 == 2) {
            target = fahrenheit_to_kelvin(temperature);
        }
    } else if (input == 2) { //If Celsius choose the conversion target
        printf("Choose Conversion Target: \n1) Fahrenheit\n2) Kelvin\n");
        scanf("%d", &input2);
        if (input2 == 1) {
            target = celsius_to_fahrenheit(temperature);
        } else if (input2 == 2) {
            target = celsius_to_kelvin(temperature);
        }
    } else if (input == 3) { //If Kelvin choose the conversion target
        printf("Choose Conversion Target: \n1) Fahrenheit\n2) Celsius\n");
        scanf("%d", &input2);
        if (input2 == 1) {
            target = kelvin_to_fahrenheit(temperature);
        } else if (input2 == 2) {
            target = kelvin_to_celsius(temperature);
        }
            if (input == 1) {
        celsius_temp = fahrenheit_to_celsius(temperature);
    } else if (input == 2) {
        celsius_temp = temperature;
    } else {
        celsius_temp = kelvin_to_celsius(temperature);
    }
    }
    printf("\nConverted Temperature: %.2f\n", target); //Prints converted temperature
    printf("Temperature Category: ");
    categorize_temperature(celsius_temp); //Prints the weather advisory
    return 0;
}