#include<stdio.h>

int main ()
{
    FILE *file ;
    char ch [100]  ;

    file = fopen("Test3.txt","r") ;

    if (file == NULL)
    {
        printf("The file is not exist\n") ;
    }
    else
    {
        printf("File is opend\n") ;

        while (!feof(file))
        {
            fgets(ch,99,file) ;

            printf ("%s",ch) ;
        }

        fclose (file) ;
    }


    getch() ;
    return 0 ;
}
