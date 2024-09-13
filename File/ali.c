#include<stdio.h>

int main ()
{
    FILE *file ;
    char name [] = "my name is ali haidar. I am a cse student.";

    int length = strlen(name) ;

    printf("The length  is : %d\n",length) ;

    file = fopen("test.txt","a") ;

    if (file == NULL)
    {
        printf("File is not created.") ;
    }
    else
    {
        printf("File is created.\n") ;

        for (int i=0 ; i<length ; i++)
        {
            fputc (name[i],file) ;
        }
        printf("\nFile write successfully complete.\n") ;

        fclose(file) ;
    }

    getch () ;
    return 0 ;
}
