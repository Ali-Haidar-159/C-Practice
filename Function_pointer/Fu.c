#include<stdio.h>
#define PI 3.1416


float areaOfTriangle (int radious)
{
    float area = 0 ;

    area = PI * radious * radious ;

    return area ;
}

int main ()
{
    int radious = 5 ;
    float area ;

    float (*ptr)(int) ;
    ptr = &areaOfTriangle ;

    area = (*ptr)(5);

    printf("The area is : %f \n",area) ;

    getch () ;
    return 0 ;
}
