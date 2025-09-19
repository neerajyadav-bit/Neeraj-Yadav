#include <stdio.h>
int main()
{
// int arr[5] = {1, 2, 3, 4, 5};
// for( int i=0;i<5;i++){
//     printf("%d\n",arr[i]);
// }

// printf("%d\n",arr[3]);

// if(arr[3]>arr[2])
// {
//     printf("%d\n",arr[3]);
// }
// else{
//     printf("%d\n",arr[2]);
// }

// for(int i=4;i>=0;i--)
// {
//     printf("%d\n",arr[i]);
// }

// int sum=0;
// for ( int i=0;i<5;i++)
// sum=sum+arr[i];
// printf("%d\n",sum);

// int sum;
//     for( int i=0;i<3;i++)
//     sum = sum+arr[i];
//     printf("%d\n",sum);

// int max =arr[0];
// for( int i=0;i<5;i++)
// {
//     if (arr[i]>max)
//     {
//         max=arr[i];
//         printf("%d\n",max);
//     }
// }

// int min =arr[0];
// for( int i=4;i>0;i--)
// {
//     if (arr[i]<min)
//     {
//         min=arr[i];
//         printf("%d\n",min);
//     }
// }

// int i;
// for(i=0;i<5;i++){
// if(arr[i]==5)
// {
//     printf("%d\n",arr[i]);
// }

// }

// int i;
// for( int i=0;i<5;i++)
// {
//     if(arr[i]%2==0)
//     {
//         printf("even no");
//     }
//     else {
//         printf("%d" ,arr[i]);
//     }

// int target = 5;

// for (int i = 0; i < 5; i++)

// // {
// if(arr[i]==target)
// {
//     // printf("true");
//     printf("%d",arr[i]);
// }
// }

// {
//     if (arr[i] ==)
//     {
//         printf("%d\n", arr[i]);
//     //     }
//     }
// }

// int arr[7] = {1, 3, 4, 6, -5, 5, 1};
// int k = 7;
// for (int i = 0; i < 7; i++)
// {
//     for (int j = 0; j < 7; j++)
//     {
//         if (arr[i] + arr[j] == k)
//         {
//             printf("%d %d", i, j);
//             break;
//         }
//     }
//}

// int arr[5] = {1, 2, 3, 4, 5};
// int i;
// for (int i = 0; i < 5; i++)
// {
//     if (arr[i] < 9)
//     {
//         printf("%d\n", arr[i]);
//     }
// }

// int arr[5]={1,2,3,2,1};
// int i;
// int j;
// int check=1;
// for(i=0;i<5/2;i++)

// {
//    if(arr[i]!=arr[5-1-i])
//    {
//     check=0;
//    }

// }

// if(check){
//     printf("hai ");

// }else{
//     printf("nahi hai");
// }

//     int arr[5] = {1, 2, 7, 2, 1};
//     int i;
//     int j;
//     int check = 1;
//     for (i = 0; i < 5 / 2; i++)

//     {
//         if (arr[i] == arr[5 - 1 - i])
//         {
//             check = 0;
//         }
//     }

//     if (check)
//     {
//         printf("hai ");
//     }
//     else
//     {
//         printf("nahi hai");
//     }
// }

//     int arr[5], i, temp;
//     printf("Enter 5 Elements\n");
//     for (i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     for (i = 0;i<5/2;i++)
//     {
//         temp = arr[i];
//         arr[i] = arr[5 - 1 - i];
//         arr[5 - 1 - i] = temp;
//     }
//     printf("Reverse Array\n");
//     for (i = 0; i < 5; i++)
//     {

//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }
//---------------------------------------------------------------------------------------------------------------
// int maxArraysum(int arr[], int n, int k)
// {
//     int maxSum = 0;
//     for (int i = 0; i <= n - k; i++)
//     {
//         int currSum = 0;
//         for (int j = i; j < i + k; j++)
//         {
//             currSum = currSum + arr[j];
//         }
//         if (currSum > maxSum)
//         {
//             maxSum = currSum;
//         }
//     }
//     return maxSum;
// }
// int main()
// {
//     int arr[7]={-1,2,4,5,-4,-3,-7};
//     int k=3;
//     int n;
// }
// //---------------------------------------------------------------------------------------------------------------
// int main()
// {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                

//     int arr[5] = {-8, 2, -3, 4, 9};
//     int maxSum = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         int curSum = 0;
//         for (int j = i; j < 5; j++)
//         {
//             curSum = curSum + arr[j];
//             if (curSum > maxSum)
//             {
//                 maxSum = curSum;
//             }
// //         }
//     }
//     printf("%d", maxSum);
//     return 0;
// }



 int arr[5]={ 1,3,4,5,6};
 for( int  i=0;i<6;i++)
 {
for( int j=0;j<6;j++)
{
    int temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;

}
printf("%d %d",i ,j);
 }
int arr[5]={ 1,4,5,65,3};
int n= Sizeof(arr)/Sizeof(int);
for( int i=0;i<n-1;i++)

for (int j=0;j<n-i-1;j++)
{
}
