#include<stdio.h>
void main()
{
    int a[5];//system will be assigned with garbage variable
    printf("%d\n",a[0]);
    printf("%d\n",0[a]);
    printf("%d\n",*(a+0));

    int aa[5]={2,4,6,8,10};//array will be created at run time

    int A[5]={9,5};
    printf("%d\n",A[4]);
    printf("%d\n",A[0]);


    int t[5]={0};
    printf("%d\n",t[0]);


    int x[]={3,4,5,6,7};

    //accessing
    int g[5]={2,3,44,6,7};
    printf("%d\n",g[3]);
    
    //traverse
    for(int p=0;p<5;p++)
    {
        printf("%d\n",g[p]);
    }


    //different way 
    printf("%d\n",g[0]);
    printf("%d\n",0[g]);
    printf("%d\n",*(g+0));
}
