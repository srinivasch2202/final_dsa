#include<stdio.h>
void main()
{
    int a=10;
    int b=20;
    int *p=&a;
    int *q=&b;
    printf("%d \n%d\n%x ",*p,*q,&p);
}