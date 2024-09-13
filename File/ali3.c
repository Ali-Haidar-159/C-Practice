#include<stdio.h>

int main ()
{
    FILE * file ;

    char name [20] ;
    int id ;

    file = fopen("Test3.txt","a") ;

    if (file != NULL)
    {
        printf("File is created.\n") ;

        printf("Enter your name : ") ;
        gets(name) ;
        printf("Enter your id : ") ;
        scanf("%d",&id) ;

        fprintf(file,"name : %s and id : %d\n",name,id) ;

        printf("File written successfully .\n") ;
    }


    getch () ;
    return 0 ;
}
