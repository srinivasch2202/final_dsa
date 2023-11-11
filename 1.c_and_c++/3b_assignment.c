#include<stdio.h>
void main()
{
    int a=10;
    int b=20;
    int *p=&a;
    int *q;
    q=p;
    // *q=*p;
    printf("\n%d\n%d\n%d\n ",a,*p,*q); // assignment operator 

}