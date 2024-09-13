#include<stdio.h>

int main ()
{
    int a[3] ;
    int *ptr ;
    ptr = a ;
    int i ;

    /*for (i=0 ; i<3 ; i++)
    {
        printf("a[%d] = %d\n",i,a[i]) ;
    }*/

    for (i=0 ; i<3 ; i++)
    {

        scanf("%d",(ptr+i)) ;
    }

    for (i=0 ; i<3 ; i++)
    {
        printf("a[%d] = %d\n",i,*(ptr+i)) ;
    }

    getch() ;
    return 0 ;
}
