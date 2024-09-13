#include<stdio.h>

int main ()
{
    int arr [] = {5, 3, 9, 1, 7, 2, 8, 4, 6} ;
    int i , j , len , temp , small ;

    len = sizeof(arr)/sizeof(int) ;

    printf("Before sort : \n") ;
    for (i=0 ; i<len ; i++)
    {
        printf("%d ",arr[i]) ;
    }

    for (i=0 ; i<len-1 ; i++)
    {
        small= i ;
        for (j=i+1 ; j<len ; j++)
        {
            if (arr[small] > arr[j])
            {
                temp = arr[small] ;
                arr[small] = arr[j] ;
                arr[j] = temp ;
            }
        }
    }

    printf("\nafter sorted : \n") ;
    for (i=0 ; i<len ; i++)
    {
        printf("%d ",arr[i]) ;
    }


    getch() ;
    return 0 ;
}
