// simple c program(hello world)single
/*
Name:Maureen N Kamau
Reg:CT100/G/26147/25
Description:room occupancy multiple branches
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int chain[3][5][10];
    int branch,floor,room;
    int total=0;

    srand(time(0));

    for(branch=0;branch<3;branch++)
    for(floor=0;floor<5;floor++)
    for(room=0;room<10;room++){
        chain[branch][floor][room]=rand()%2;
        total+=chain[branch][floor][room];
    }
    printf("total occupied rooms:%d\n",total);
    printf("total vacant rooms:%d\n",3*5*10-total);

    return 0;
}