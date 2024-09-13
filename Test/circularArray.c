#include<stdio.h>

int main ()
{
    char letter [] = {'A','B','C','D','E'} ;

    int len = sizeof(letter)/sizeof(char) ;

    for (int i=0 ; i<15 ; i++)
    {
        printf("%c ",letter[i%len]) ;
    }


    getch() ;
    return 0 ;
}
