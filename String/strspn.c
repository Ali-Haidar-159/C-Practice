#include<stdio.h>
#include<string.h>

int main ()
{
    char s1 [100] = "my name is ali haidar" ;
    char s2 [100] = "abcdefghijklmnopqrstuvwxyz" ;

    int n ;

    n = strcspn(s1,s2) ;

    printf("The value is  : %d\n",n) ;

    getch () ;
    return 0 ;
}
