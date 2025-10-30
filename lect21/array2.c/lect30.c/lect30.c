// #include<stdio.h>
// void sum( int a)
// {
//     if(a==0)
//     {
//         return;
//     } 
//     sum(a-1);
//     printf("%d\n",a);
// }
// int main()
// {
//     sum(3);

// }


// #include<stdio.h>
// int  sum( int a)
// {
//     if(a==0)
//     {
//         return 0;
//     } 
//     return a+sum(a-1);
    
// }
// int main()
// {
//    int data= sum(3);
//    printf("%d",data);

// }



// #include<stdio.h>
// int  fact( int a)
// {
//     if(a==0 ||a==1)
//     {
//         return 1;
//     } 
//     return a*fact(a-1);
    
// }
// int main()
// {
//    int data= fact(4);
//    printf("%d",data);

// }


// #include<stdio.h>


// int sum( int arr[],int n)
// {
//     if( n==0)
//     {
//         return 0;
//     }
//     return arr[ n-1]+sum(arr[n-1]);
// }
// int main()
// {
// int arr[3]={ 3,4,1};
// int n=3;
// int data=sum(arr,n);
// printf("%d",data);
// }


#include<stdio.h>

int power( int a)
{
    if( a==0)
    {
        return 1;
    }
    return 2*power(a-1);
}
int main()
{
int data =power(5);
printf( "%d",data);

    
}