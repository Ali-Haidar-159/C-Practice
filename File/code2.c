
#include <stdio.h>

int main ()
{
    char name [20] , versity[20] ;

    FILE *file ;

    file = fopen ("test2.txt","a") ;

    if (file == NULL)
    {
        printf("The file does not exist .\n") ;
    }
    else
    {
        printf ("The file is created .\n") ;

        printf("Enter your name : ") ;
        gets (name)  ;
        printf("Enter your university : ") ;
        gets (versity) ;

        fputs("asasasaa",file) ;
        fputs("\n",file) ;
        fputs(versity,file) ;

        printf("File write successfully complete") ;

        fclose(file) ;
    }


    getch () ;
    return 0 ;
}
