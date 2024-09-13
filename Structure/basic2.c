
#include <stdio.h>

struct person
{
    int id ;
    float salary ;
};

int main ()
{
    struct person arr [4] ;
    int i ;

    for (i=0 ; i<4 ; i++)
    {
        printf("Enter id : ");
        scanf("%d",&arr[i].id) ;
        printf("Enter salary : ") ;
        scanf("%f",&arr[i].salary) ;
    }

    for (i=0 ; i<4 ; i++)
    {
        printf("Id : %d\n",arr[i].id) ;
        printf("Salary : %f\n\n",arr[i].salary) ;
    }


    getch() ;
}
