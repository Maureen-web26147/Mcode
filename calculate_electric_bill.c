//simple c program (hello world)single
/*
Name:Maureen N Kamau
Reg:CT100/G/26147/25
Description:electric bill
*/

#include <stdio.h>


int calculateElectricBill(int units) {
    int bill = 0;

printf("Input number of units: ");
  scanf("%d", &units);

    if (units >= 0 && units <= 100) {
        bill = units * 10;
    } 
    else 
    if (units > 100 && units<=200){
        bill = units * 15;
    } 
    else 
    if (units > 200){
        bill = units * 20;
    }
    else{
        printf("You have entered an invalid number!!! \n");
    }

    return bill;
}

int main(){
    int units;
    printf("Input number of units: ");
    scanf("%d", &units);

    int result = calculateElectricBill(units);

    printf("Your bill is: %d", result);

    return 0;

}
