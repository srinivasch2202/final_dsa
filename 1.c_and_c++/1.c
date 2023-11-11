#include<stdio.h>
void main()
{
    int a[5]; //memory will be assigned at runtime
    int aa[5]={1,2,3,4,5};
    a[2]=15;
    printf("%d\n",a[2]);
    printf("%d\n",2[a]); 
    printf("%d",*(a+2));// using arthemetic pointer variable 


}