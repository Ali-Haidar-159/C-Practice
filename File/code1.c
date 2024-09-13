#include <stdio.h>

int main ()
{
    FILE *file ;

    file = fopen("test1.txt","a") ;

    if (file == NULL)
        printf ("File does not created.") ;
    else
    {
        printf ("File is created.") ;

        char name [] = "Ali Haidar is a student ." ;
        int length = strlen(name) ;

        for (int i= 0 ; i<length; i++)
        {
            fputc(name[i] ,file) ;

        }
        printf ("File write successfully .") ;

        fclose (file) ;
    }

    getch () ;
    return 0 ;
}
