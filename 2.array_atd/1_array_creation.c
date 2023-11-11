#include<stdio.h>
#include<stdlib.h>

struct array
{
    int p[20];
    int size;
    int length;
};

//DISPLAY
void display(struct array arr)
{
    // int i;
    // printf("enter the index value  u want print");
    // scanf("%d",&i);
    // if(i<<arr.length){
    //     //printing one variable
    //     printf("%d\n",arr.p[i]);
    // }

    //traversing using the for loop entire array
    for(int i=0;i<arr.length;i++)
    {
        printf("%d\t",arr.p[i]);
    }
    printf("\n");

}


//APPEND OR ADD
void append(struct array arr)
{
    printf("enter the value want to add");
    int i;
    scanf("%d",&i);
    arr.p[arr.length]=i;
    arr.length+=1;
    display(arr);
}


void insert(struct array arr,int index,int value)
{
    for(int i=arr.length;i>index;i--)
    {
        arr.p[i]=arr.p[i-1];
    };
    arr.p[index]=value;
    arr.length+=1;
    display(arr);


}

void delete(struct array arr,int index)
{
    for(int i=index;i<arr.length;i++)
    {
        arr.p[i]=arr.p[i+1];
    }
    arr.length-=1;
    display(arr);
};

int linearsearch(struct array arr,int key)
{
    for(int i=0;i<arr.length;i++)
    {
        if(key==arr.p[i])
        {
            // swapcaase(i-1,i);
            return i;
        }
    }
    return -1;
};



int  binarysearch(struct array arr,int key)
{
    int l=0;
    int h=arr.length-1;
    while (l<=h)
    {
        int mid=(l+h)/2;
        if(key==arr.p[mid]){
            return mid;
        }
        else if(key<arr.p[mid])
        {
            h=mid-1;
        }
        else
        {    
            l=mid+1;
        }
    }
    return -1;
}

// int  rbinarysearch(struct array arr,int l,int h,int key)
// {
//     int mid=(l+h)/2;   
//     if(key==arr.p[mid])
//     {
//         return mid;
//     }
//     else if(key<arr.p[mid])
//     {
//         h=mid-1;
//         return binarysearch(struct array arr,l,h,key)
//     }
// }


int sum(struct array arr)
{
    int sum=0;
    for(int i=0;i<arr.length;i++)
    {
        sum+=arr.p[i];

    }
    return sum;
}

int recu_sum(struct array arr,int n)

{
    if(n>=0)
    {
        return arr.p[n]+recu_sum(arr,n-1);
    }
    
}
void main()
{
    struct array arr={{2,3,4,5,6},20,5};    
    // display(arr);
    // append(arr);
    // insert(arr,0,34);// worst case 0(n)
    //insert( arr,length,34)//best case 

    // printf("=====================================\n");

    // delete(arr,2);
    // display(arr);


    // printf("%d\n",linearsearch(arr,6));


    // printf("%d\n",binarysearch(arr,5));


    printf("%d\n",sum(arr));
    printf("%d\n",recu_sum(arr,6));


}