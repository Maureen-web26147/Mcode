//simple c program(Hello world)single
/*
Name:Maureen N Kamau
Reg:CT100/G/26147/25
Description:Water Bill
*/

#include<stdio.h>

int total_bill;

int main(){
	int consumed_units;
	printf("enter the number of water consumed:");
	scanf("%d",&consumed_units);
	
	if(consumed_units>=0&&consumed_units<=30){
		total_bill=consumed_units*20;
		printf("your total bill is:%d\n",total_bill);
	}
	else if(consumed_units>=31&&consumed_units<=60){
		total_bill=consumed_units*20;
		printf("your total bill is:%d\n",total_bill);     }
else{
	total_bill=consumed_units*25;
	printf("your total bill is:%d\n",total_bill);
}
return 0;
}
	