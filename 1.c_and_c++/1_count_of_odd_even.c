#include<stdio.h>
void main()
{
    int a[10];
    int even=0;
    int odd=0;

    for(int i=0;i<10;i++)
    {
        printf("enter the numbers\n");
        scanf("%d",&a[i]);
    }
    for(int j=0;j<10;j++)
    {
        if(a[j]%2==0)
        {
            even+=1;
        }
        else
        {
            odd+=1;
        }
        printf("even : %d\nodd : %d\n",even,odd);

    }
}