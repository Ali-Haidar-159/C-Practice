
#include <stdio.h>

int main ()
{
    int a , b ;

    int *pt1 , *pt2 ;

    pt1 = &a ;
    pt2 = &b ;

    printf("Enter 1st number : ") ;
    scanf ("%d",pt1) ;
    printf("Enter 2nd number : ") ;
    scanf("%d",pt2) ;

    int sum=0 ;

    sum = *pt1 + *pt2 ;

    printf("The sum is : %d",sum);


    getch( ) ;
    return 0 ;
}
