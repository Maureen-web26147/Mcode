//simple c program(hello world)single
/*
Name:Maureen N Kamau
Reg:CT100/G/26147/25
Description:fare
*/
#include <stdio.h>

float calculateFare(float distance) {
    float fareRate = 50.0;  
    float totalFare = distance * fareRate;
    return totalFare;
}

int main() {
    float distance, fare;

    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    fare = calculateFare(distance);

    printf("Total Fare: KSh. %.2f\n", fare);

    return 0;
}
