#include<stdio.h>

int main ()
{
    FILE *file ;

    file = fopen("Test2.txt","r") ;

    char c ;

    if (file == NULL)
    {
        printf("The file is not exist.\n") ;
    }
    else
    {
        printf("The file is opend .\n") ;

        while (!feof(file))
        {
            c = fgetc(file) ;
            printf("%c",c) ;
        }
        printf("\nFile read end .\n") ;

        fclose (file) ;
    }

    getch() ;
    return 0 ;
}
