
#include <stdio.h>

int main ()
{
    int i , a[5] ;
    int *p ;

    p = a ;

    int lenth = sizeof(a) / sizeof(a[0]) ; //a[5] = int*5 =  4*5=20  , a[0]= 4 , length = 20/4 = 5 ;

    printf("Length of array : %d\n",lenth) ;

    for (i=0 ; i<lenth ; i++)
    {
        printf("Enter a[%d] :",i+1) ;
        scanf("%d",(p+i)) ;
    }

    for (i=0 ; i<lenth ; i++)
    {
        printf("%d\t",*(p+i)) ;
    }

    getch() ;
    return 0 ;
}
