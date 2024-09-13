#include <stdio.h>

struct Person
{
    int id ;
    float salary ;
};

int main ()
{
    int x , y , *p1 ;
    struct Person man , woman , *p2 ;

    p1 = &y ;
    p2 = &woman ;

    printf("Enter x : ");
    scanf ("%d",&x) ;

    printf("\nEnter y : ") ;
    scanf("%d",p1) ;

    printf("\nEnter id of man : ") ;
    scanf("%d",&man.id) ;
    printf("Enter salary of man : ") ;
    scanf("%f",&man.salary) ;

    printf("\nEnter id of woman :  ") ;
    scanf("%d",&p2->id) ;
    printf("Enter salary of woman : ") ;
    scanf("%f",&p2->salary) ;

    printf("\n------------------------------------\n");


    printf("X = %d\n",x) ;
    printf("Y = %d\n\n",*p1) ;

    printf("Man Id : %d\n",man.id) ;
    printf("Man salary : %f\n",man.salary) ;

    printf("Woman Id : %d\n",p2->id) ;
    printf("Woman salary : %f\n",p2->salary) ;

    getch() ;
    return 0 ;

}
