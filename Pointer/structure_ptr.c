#include<stdio.h>

struct Ali
{
    int id ;
    float salary ;
};

int main ()
{
    typedef struct Ali haidar ;

    haidar p1 ;
    haidar *ptr ;
    ptr = &p1 ;

    printf("Enter id : ") ;
    scanf("%d",&ptr->id) ;
    printf("Enter salary : ") ;
    scanf("%f",&ptr->salary) ;

    printf("Your id is : %d\n",ptr->id);
    printf("Your salary is : %f\n",ptr->salary) ;


    getch() ;
    return 0 ;
}
