//simple c program( hello world)single
/*
Name:Maureen N Kamau
Reg:CT100/G/26147/25
Description:Weekly revenue tracker
12011*/

#include<stdio.h>

int main(){
    int revenue[7];
    int total=0;
    int i=0;
    float average;

    printf("enter the revenue for each dayof the week:\n");
    for(int i=0;i<7;i++);
    printf("day %d:",i+1);
    scanf("%d",&revenue[i]);
    total+=revenue[i];

    average=total/7.0;

    printf("total weekly revenue:%d\n",total);
    printf("average daily revenue:%2f\n",average);

    return 0;
}