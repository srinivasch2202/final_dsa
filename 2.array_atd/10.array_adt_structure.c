#include<stdio.h>
#include<stdlib.h>
struct array
{
    int *a;
    int size;
    int length;
};
struct array arr;

void main()
{
    // struct array arr;
    printf("enter the size of the array");
    scanf("%d",&arr.size);
    arr.a=(int *)malloc(arr.size*sizeof(int));
    arr.length=0;
    
    int n=0;
    printf("enter the how many numbers u want to enter ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr.a[i]);
    }
    arr.length=n;
    printf("=====================================\n");

    display();
}
void display()
{
    for(int i=0;i<arr.length;i++)
    {
        printf("%d\n",arr.a[i]);
    }
}