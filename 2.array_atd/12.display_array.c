#include<stdio.h>
#include<stdlib.h>
struct array 
{
    int A[10];
    int size;
    int length;
};
struct array arr={{1,2,3,4,5},10,5};
void main()
{
    display();
}
void display()
{
    for(int i=0;i<arr.length;i++)
    {
        printf("%d\n",arr.A[i]);
    }
}