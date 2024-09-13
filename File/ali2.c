#include <stdio.h>

int main ()
{
    FILE *file ;

    file = fopen("Test2.txt","a") ;

    if (file == NULL)
    {
        printf("File is not created.\n") ;
    }
    else
    {
        printf("File is created.\n") ;

        char info [100] ;

        printf("Enter something : ") ;
        gets (info) ;

        fputs("\n",file) ;
        fputs(info,file) ;


        printf("Write successfully .\n") ;

    }

    getch () ;
    return 0 ;
}
