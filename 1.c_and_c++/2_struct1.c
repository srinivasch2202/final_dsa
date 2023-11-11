#include<stdio.h>
struct employee
{
    int empis;
    char name[20];
    float salary;
};
void main()
{
    struct employee e1={1,"sinrivas",23.56};
    struct employee e2={2};
    printf("%d\n%s\n%f",e1.empis,e1.name,e1.salary);
    printf("%d",e2.empis);
}