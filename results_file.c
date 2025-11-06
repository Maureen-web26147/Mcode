# include <stdio.h>

int main(){

    FILE*file;
    char studentname[50];
    int registrationnumber;
    int totalmarks;

    file=fopen("results.dat","rb");

    
    printf(" enter name of the student:");
    fgets(studentname,sizeof(studentname),stdin);
    printf("marks of student:");
    scanf("%d",&totalmarks);

    fprintf(file,"%s\n",studentname);
    fprintf(file,"%d\n",registrationnumber);
    fprintf(file,"%d\n",totalmarks);


    fclose(file);

    printf("data saved successfully to results.dat\n");

    return 0;
}