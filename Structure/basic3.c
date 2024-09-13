#include <stdio.h>

struct Employee
{
    char name [30] ;
    int id ;
    float salary;
};

int main ()
{
    struct Employee e1 ;

    printf("Enter name : ") ;
    gets(e1.name) ;
    printf("Enter id : ");
    scanf("%d",&e1.id) ;
    printf("Enter salary : ") ;
    scanf("%f",&e1.salary) ;

    printf("\nName : %s\n",e1.name) ;
    printf("Id : %d\n",e1.id) ;
    printf("Salary : %f\n",e1.salary) ;

    printf("\n\nSize of a variable : %d",sizeof(e1)) ;

    getch() ;
}
