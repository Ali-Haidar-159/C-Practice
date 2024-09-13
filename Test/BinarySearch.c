#include<stdio.h>

int main ()
{
    int a[] = {2,4,6,8,10,12,14,16,18,20} ;

    int len , left , right , middle , item ;
    len = sizeof(a) / sizeof(int) ;

    left = 0 ;
    right = len-1 ;

    printf("Enter the item for search : ") ;
    scanf("%d",&item) ;

    while(left<=right)
    {
        middle = (left+right)/2 ;

        if(a[middle] == item)
        {
            printf("Find\n") ;
            break ;
        }

        else if (item > a[middle])
        left = middle+1 ;
        else if (item < a[middle])
            right = middle-1 ;

    }


    getch() ;
    return 0 ;
}
