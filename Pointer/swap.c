
#include <stdio.h>

void swapNumber (int *ptr1, int *ptr2)
{
    int temp ;

    temp = *ptr1 ;
    *ptr1 = *ptr2 ;
    *ptr2 = temp ;
}

int main ()
{
    int a = 10, b = 20 ;

    int *p1 = &a ;
    int *p2 = &b ;

    printf("Before swap : \n") ;
    printf("A = %d\n",a) ;
    printf("B = %d\n",b) ;

    swapNumber(p1,p2) ;


    printf("After swap : \n") ;
    printf("A = %d\n",a) ;
    printf("B = %d\n",b) ;

}
