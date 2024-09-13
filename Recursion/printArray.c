#include<stdio.h>

void printArray (int arr [], int len,int searchItem)//5
{
    if (len==0)
        {
            printf("We can NOT find the number \n") ;
            return ;
        }
    else
    {
        //printf("%d ",arr[len-1]) ;
        if(arr[len-1] == searchItem)
        {
            printf("We found the number \n") ;
            return ;
        }
        printArray(arr , len-1,searchItem) ;
    }

}

int main  ()
{
    int arr[] = {10,20,30,40,50} ;
    int len = sizeof(arr)/sizeof(int) ;
    int searchItem ;

    printf("Enter the number for search : ") ;
    scanf("%d",&searchItem) ;

    printArray(arr,len,searchItem) ;

    getch() ;
    return 0 ;
}
