#include <stdio.h>

int main ()
{
    int i ;

    for (i=0 ; i<10 ; i++)
    {
        static int n = 0 ; // mane ei line ta ekbar execute korbe .

        printf("%d\n",n) ;
        n++ ;
    }

    getch() ;
    return 0 ;
}
