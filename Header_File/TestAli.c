#include<stdio.h>
#include "ali.h"

int main ()
{
    printf ("The age is : %d\n",AGE) ;

    addNumbers (10,20) ;

    struct person p , s ;
    struct person *ptr ;
    ptr = &s  ;

    printf("Enter 1st person id : ");
    scanf("%d",&p.id) ;
    printf("Enter 1st person salary : ") ;
    scanf("%f",&p.salary) ;

    printf("Enter 2nd person id : ");
    scanf("%d",&ptr->id) ;
    printf("Enter 2nd person  salary : ") ;
    scanf("%f",&ptr->salary) ;


    printf("1st person  id is : %d\n",p.id) ;
    printf("1st person  salary is : %f\n",p.salary) ;


    printf("2nd person id : %d\n",ptr->id) ;
    printf("2nd person salary : %f\n",ptr->salary) ;


    getch () ;
    return 0 ;
}
