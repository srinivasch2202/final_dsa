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
    delete(4);
}
void delete(int index)
{
    if(index>=0 && index<arr.length)
    {
        for(int i=index;i<arr.length;i++)
        {
            arr.A[i]=arr.A[i+1];
        }
        arr.length-=1;
        display();
    }
    else
    {
        printf("index is out of the bound");
    }
}

void display()
{
    for(int i=0;i<arr.size;i++)
    {
        printf("%d\n",arr.A[i]);

    }
}