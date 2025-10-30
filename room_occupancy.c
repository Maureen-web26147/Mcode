//simple c program(hello world)single
/*
Name:Maureen N Kamau
Reg:CT100/G/26147/25
Description:Room occupancy
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int occupancy[5][10];
    int occupied;
    int vacant;

    srand(time(0));

    for(int floor=0;floor<5;floor++){
        for(int room=0;room<10;room++){
        occupancy[floor][room]=rand()%2;
    }
}

printf("room occupancy(1=occupied,0=vacant\n");
for(int floor=0;floor<5;floor++){
    occupied=0;
    vacant=0;

    printf("floor %d:", floor+1);
    for(int room=0;room<10;room++){
        printf("%d",occupancy[floor][room]);
        if(occupancy[floor][room]==1)
        occupied++;
        else
        vacant++;
    }

    printf("occupied:%d\tvacant:%d\n\n",occupied,vacant);
}
return 0;
}