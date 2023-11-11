#include<stdio.h>
void main()
{
    int marks[5];
    float sum;
    float avg;
    for(int i=0;i<5;i++)
    {
        printf("enter the marks ");
        scanf("%d",&marks[i]);
        sum=sum+marks[i];
        // printf("%f",sum);
    }
    
    avg=sum/5;
    printf("the average of 5 students is :%f\n",avg);
}