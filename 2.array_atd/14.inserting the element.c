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
    inserting(3,99);
}
void inserting(int index,int element)
{
    if(index>=0 && index<arr.size)
    {
        for(int i=arr.length;i>index;i--)
        {
            arr.A[i]=arr.A[i-1];
        }
        arr.A[index]=element;
        arr.length+=1;
        display();
    }
    else
    {
        printf("index is put ofbound");
    }
}
void display()
{
    for(int i=0;i<arr.size;i++)
    {
        printf("%d\n",arr.A[i]);
    }
}