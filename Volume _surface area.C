/*
Name:Maureen N Kamau
Reg:CT100/G/26147/25
Description:program to compute surface area and volume of cylinder
volume=πr2h,surface area=2πr(r+h)
*/

#include <stdio.h>
#define PI 3.1416

int main() {
    float radius, height, volume, surfaceArea;

    // Input values
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Enter height: ");
    scanf("%f", &height);

    // Calculate volume and surface area
    volume = PI * radius * radius * height;
    surfaceArea = 2 * PI * radius * (height + radius);

    // Output results
    printf("Volume = %.2f\n", volume);
    printf("Surface Area = %.2f\n", surfaceArea);

    return 0;
}