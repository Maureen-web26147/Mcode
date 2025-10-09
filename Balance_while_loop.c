// simple c program(Hello world)single
/*
Name:Maureen N Kamau
Reg:CT100/G/26147/25
Description:while loop
*/

#include<stdio.h>

int main(){
	//start,stop,step
	int amount;
	int balance=2700;
	printf("current balance%d\n",balance);
	
	while(balance>0){
		printf("enter amount to withdraw\n");
		scanf("%d",&amount);
		balance -=amount;
		printf("new balance: =%d \n",balance);
		
	}
	printf("insuficient balance");
	return 0;
}
		
		