#include <stdio.h>
#include <string.h>
int main()

// {
//     char str[]="abca";
//     int freq[256]={0};
//     int ln=strlen(str);

//     for( int i=0;i<ln;i++)
//     {
//         freq[str[i]]++;
//     }
//     for( int i=0;i<256;i++)
//     {
//         if(freq[i]>0)
//         {
//         printf("%c: %d",i,freq[i]);
//         }
//     }
// }

// {
//     char str[] = "cabbabk";
//     int freq[256] = {0};
//     int ln = strlen(str);

//     for (int i = 0; i < ln; i++)
//     {
//         freq[str[i]]++;
//     }
//     for (int i = 0; i < 256; i++)
//     {
//         if (freq[i] > 0)
//         {
//             printf("%c: %d", i, freq[i]);
//         }
//     }
// }

// {
//     char str[] = "cabachdaajbbsj";
//     int freq[256] = {0};
//     int ln = strlen(str);

//     for (int i = 0; i < ln; i++)
//     {
//         freq[str[i]]++;
//     }
//     for (int i = 0; i < 256; i++)
//     {
//         if (freq[i] > 0)
//         {
//             printf("%c\n: %d\n:", i, freq[i]);
//         }
//     }
// }

// {
//     char str[] = "aaabbbcccddd";
//     int freq[256] = {0};
//     int ln = strlen(str);

//     for (int i = 0; i < ln; i++)
//     {
//         freq[str[i]]++;
//     }
//     for (int i = 0; i < 256; i++)
//     {
//         if (freq[i] > 0)
//         {
//             printf("%c\n %d:\n", i, freq[i]);
//         }
//     }
// // }

// {
//     char str[]="skdsdsd";
//     int freq[256]={0};
//     int ln= strlen(str);

//     for( int i=0;i<ln;i++)
//     {
//         freq[str[i]]++;

//     }

//     for( int i=0;i<256;i++)
//     {
//         if( freq[i]>0)

//         {
//             printf("%c\n %d\n:" ,i,freq[i]);
//         }
//     }

// }

// {
//     char str[] = "abcbjbebf";

// int freq[256] = {0};
//     int ln = strlen(str);
//     char result;
//     int max=0;

//     for (int i = 0; i < ln; i++)
//     {
//         freq[str[i]]++;
//     }
//     for (int i = 0; i < ln; i++)
//     {
//         if (freq[[str[i]]] > max)
//         {
//             if( freq[i]>i)
//             {
//                 printf("%c: %d", i, freq[i]);
//             }
//         }

//             printf("%c: %d", i, freq[i]);

//     }
//     for(int i=0;i<ln;i++)
//     {
// if( freq[str[i]]>max)
// {
//     max=freq[str[i]];
//     result=str[i];
// }
//     }
// }

// {

//     int arr[]={ 7,4,5,3,6,8};

//     for( int i=0;i<5;i++)
//     {
//         int temp=0;
//         for( int j=i+1;j<6;j++)
//         {
//             if(arr[i]>arr[j])
//             {

//             temp =arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }
//     }
// }
// int n;
// printf("Enter a number");
// scanf( "%d",&n);
// printf("%d largest number  is %d",n,arr[ 6-n]);

// }

{
    int arr[] = {-3, 2, 4, -7, -1, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int negat[3];
    int posi[4];
    int ans[7];
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] < 0)
        {
            int j = 0;
            negat[j] = arr[i];
            j++;
        }
        else
        {

            int k = 0;
            posi[k] = arr[i];
            k++;
        }
    }
}