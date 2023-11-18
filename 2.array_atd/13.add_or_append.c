#include<stdio.h>
struct array
{
    int A[10];
    int size;
    int length;
};
struct array arr={{1,2,3,4,5},10,5};
void main()
{
    printf("enter the element u want to append\n");
    scanf("%d",&arr.A[arr.length]);
    arr.length+=1;
    for(int i=0;i<arr.size;i++)
    {
        printf("%d\n",arr.A[i]);
    }

}