
#include <stdio.h>

struct Person
{
    int id ;
    float salary ;
};

int main ()
{
    struct Person p1 = {100,60000};

    struct Person p2 , p3=p1 ;

    p2.id = 101 ;
    p2.salary = 50000 ;

    printf("Person - 1 : \n") ;
    printf("Id : %d\n",p1.id) ;
    printf("Salary : %f\n\n",p1.salary) ;

    printf("Person - 2 : \n") ;
    printf("Id : %d\n",p2.id) ;
    printf("Salary : %f\n\n",p2.salary) ;

    printf("Person - 3 : \n") ;
    printf("Id : %d\n",p3.id) ;
    printf("Salary : %f\n",p3.salary) ;

    getch() ;
}
