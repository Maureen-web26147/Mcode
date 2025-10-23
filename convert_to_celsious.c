// simple c program( hello world)single
/*
Name: Maureen N Kamau
Reg:CT100/G/26147/25
Description:convert to celsious
*/

#include <stdio.h>
float convertToCelsius(float fahrenheit) {
    float celsius;
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    return celsius;
}

int main() {
    float f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    
    c = convertToCelsius(f);
    printf("Temperature in Celsius: %.2f\n", c);
    
    return 0;
}
