//simple c program(hello world)single
/*
Name:Maureen N Kamau
Reg:CT100/G/26147/25
Description:sales file
*/

#include <stdio.h>

int main() {
    FILE *file;
    float totalsales = 0, amount;

    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fscanf(file, "%f", &amount) == 1) {
        totalsales += amount;
    }

    printf("Total sales: %.2f\n", totalsales);

    fclose(file);
    return 0;
}

    