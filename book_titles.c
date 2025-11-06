//simple c program(Hello world)single
/*
Name:Maureen N Kamau
Reg:CT100/G/26147/25
Description:borrowed book file
*/

#include <stdio.h>

int main(){

    FILE*file;
    char title[100];

    // open a file
    file=fopen("borrowed_books.txt","a");
    if (file==NULL){
       printf("Error in opening file!\n");
        return 1;
    }

    printf("Enter the book title:");
   fgets(title,sizeof(title),stdin);

   fprintf(file,"%s\n",title);

   //close a file
   fclose(file);

   printf("Book title successfully stored!\n");

   return 0;
}

