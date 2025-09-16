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

    int arr[5] = {1, 2, 7, 2, 1};
    int i;
    int j;
    int check = 1;
    for (i = 0; i < 5 / 2; i++)

    {
        if (arr[i] == arr[5 - 1 - i])
        {
            check = 0;
        }
    }

    if (check)
    {
        printf("hai ");
    }
    else
    {
        printf("nahi hai");
    }
}