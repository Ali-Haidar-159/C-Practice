#include<stdio.h>

int main ()
{
    FILE *file ;

    char name [20]  ;
    int roll ;

    file = fopen("Test4.txt","r") ;

    if (file == NULL)
    {
        printf("File is not exist\n") ;
    }
    else
    {
        printf("File is opend \n") ;

        while (!feof(file))
        {

        fscanf(file,"%s %d",&name,&roll) ;

        printf("%s %d\n",name,roll) ;
        }


        fclose(file) ;
    }


    getch() ;
    return 0 ;
}
