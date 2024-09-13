
#include <stdio.h>

int main ()
{
    int a = 10 ;
    int * ptr ;
    ptr = &a ;

    printf("Value : %d\n",a) ;
    printf("Address : %d\n\n",&a) ;

    printf("Value with pointer : %d\n",*ptr) ;
    printf("Address with pointer : %d\n",ptr) ;

    getch() ;
}
