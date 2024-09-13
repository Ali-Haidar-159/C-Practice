#include<stdio.h>
#define A 10
#define ADD(p,q) (p+q)
#define MAX(p,q) { if (p>q) \
                   printf("The largest number is : %d\n",p) ; \
                   else \
                   printf("The largest number is : %d\n",q) ;}

int main ()
{
    printf("The value of A : %d\n",A) ;
    int x = A ;
    printf("The value of x : %d\n",x) ;

    printf("The sum is : %d\n",ADD(10,5));

    MAX(100,200) ;

    getch () ;
    return 0 ;
}
