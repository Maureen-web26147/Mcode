//simple c program(Hello world)single
/*
Name:Maureen N Kamau
Reg:CT100/G/26147/25
Description:Mobile data purchase
*/

#include<stdio.h>

int main(){
	int choice;
	printf("select data bundle:\n");
	printf("1. 100mb@50Kes:\n");
	printf("2. 500mb@200Kes:\n");
	printf("3. 1Gb@350Kes:\n");
	printf("4. 2Gb@600Kes:\n");
	printf("enter your choice 1-4:");
	scanf("%d",&choice);
	
	if (choice==1)printf("you selected 100mb.cost=50Kes\n");
	else if(choice==2)printf("you selected 500mb. cost=200Kes\n");
	else if(choice==3)printf("you selected 1Gb.cost=350Kes\n");
	else  if(choice==4)printf("you selected 2Gb.cost=600Kes\n");
	else printf("invalid choice.\n");
	
	return 0;
}
	