/*
Name:Maureen N Kamau
Reg:CT100/G/26147/25
Description:program to compute income
*/

#include <stdio.h>

int main() {
    int age;
    float income;

    // Prompt user for age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Prompt user for annual income
    printf("Enter your annual income (in shillings): ");
    scanf("%f", &income);

    // Check eligibility
    if (age >= 21 && income >= 21000) {
        printf("Congratulations! You qualify for the loan.\n");
    } else {
        printf("unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}