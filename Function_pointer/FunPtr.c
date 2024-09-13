#include<stdio.h>

void print ()
{
    printf("Hello World\n") ;
}

int main ()
{
    //print() ;

    void (*ptr)() ;
    ptr = &print ;

    (*ptr) () ;

    getch() ;
    return 0 ;
}
