
#include <stdio.h>

int main ()
{
    int a, b ;
    int *p1, *p2 ;

    p1 = &a ;
    p2 = &b ;

    //pointer diye input nilam :
    printf("Enter first number : ") ;
    scanf("%d",p1) ;
    printf("Enter second number : ") ;
    scanf("%d",p2) ;


    printf("First number is : %d\n",a) ;
    printf("Second number is : %d\n",b) ;

    printf("First number is : %d\n",*p1) ;
    printf("Second number is : %d\n",*p2) ;


    getch () ;
}
