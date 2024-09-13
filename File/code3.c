
#include<stdio.h>

int main ()
{
    char name [20] ;
    int age ;

    FILE *file ;

    file = fopen("test3.txt","a") ;

    if (file == NULL)
    {
        printf("File does not exist.\n") ;
    }
    else
    {
        printf("File created successfully.\n") ;

        printf("Enter your name : ") ;
        gets(name) ;
        printf("Enter your age : ") ;
        scanf("%d",&age) ;

        fprintf(fi  le,"name is : %s \t age is : %d",name,age) ;

        printf("File write successfully.\n") ;

        fclose(file) ;
    }

    getch() ;
    return 0 ;
}
