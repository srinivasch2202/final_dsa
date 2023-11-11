#include<stdio.h>
void main()
{
    int a[5];
    int b[5];
    int c[5];
    for(int i=0;i<5;i++)
    {
        printf("enter the numbers first array at index %d\n",i);
        scanf("%d",&a[i]);
        printf("enter the numbers of second array at index %d\n",i);
        scanf("%d",&b[i]);
        c[i]=a[i]+b[i]; 
    }
    for(int j=0;j<5;j++)
    {
        printf("%d",c[j]);
    }
}