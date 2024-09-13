#include<stdio.h>

int main ()
{
    char str [10] ;
    int a = 10 ;
    char b = 'z' ;
    float c = 25.7 ;
;

    snprintf(str,9,"my name is ali ali haidar.here i write something : %d - %c - %f",a,b,c) ;

    printf("\nThe string is : %s\n",str) ;

    getch() ;
    return 0 ;
}
