
#include<stdio.h>

int main ()
{
    int a ;
    int *p ;

    p=&a ;

    printf("Enter a number : ") ;

    //scanf("%d",&a) ; //variable dara input
    //printf("The number is : %d\n",a) ; //variable dara print

    scanf("%d",p) ;
    printf("The value is : %d",*p) ;

    getch() ;
    return 0 ;
}
