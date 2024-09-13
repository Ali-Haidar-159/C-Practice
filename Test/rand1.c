#include <stdio.h>

int main ()
{
    int r ;

    srand (time(0)) ;
    r = rand() ;

    printf("The random number is : %d\n",r) ;

    getch () ;
    return 0 ;
}
