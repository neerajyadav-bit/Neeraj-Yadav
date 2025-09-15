#include <stdio.h>
int main()
{
    // int n=5;
    // printf("Enter the  nnumber of n:");
    // scanf("%d",&n);

    // for( int i=1;i<n;i++)
    // {
    //     for( int j=1;j<=i;j++)
    //  {
    //     printf("*");
    //  }
    //  for( int j=1;j<=2*(n-i);j++)
    //  {
    //     printf(" ");
    //  }
    //  for( int j=1;j<=i;j++)
    //  {
    //     printf("*");
    //  }

    //   printf("\n");
    // }

    //  }

    // for( int i=1;i<n;i++)
    // {
    //     for( int j=n;j>=i;j--)
    //  {
    //     printf("*");
    //  }
    //  for( int j=n;j<=2*(n-i);j--)
    //  {
    //     printf(" ");
    //  }
    //  for( int j=n;j>=i;j--)
    //  {
    //     printf("*");
    //  }
    //   printf("\n");
    // }

    //  }

    // for( int i=1;i<n;i++)
    // {
    //     for( int j=1;j<=i;j++)
    //  {
    //     printf("*");
    //  }
    //  for( int j=1;j<=2*(n-i);j++)
    //  {
    //     printf(" ");
    //  }
    //  for( int j=1;j<=i;j++)
    //  {
    //     printf("*");
    //  }
    //  for( int k=3;k>i;k--)
    //  {
    //     printf("*");
    //  }

    //   printf("\n");
    // }

    // }
    // for(int i=0;i<4;i++){
    //         for(int j=3;j>i;j--){
    //             printf("*");
    //         }
    //         for(int k=0;k<=i;k++){
    //             printf(" ");
    //         }
    //          for(int k=0;k<=i;k++){
    //             printf(" ");
    //         }
    //          for(int j=3;j>i;j--){
    //             printf("*");
    //         }
    //         printf("\n");

    //     }    }

    // for( int i=1;i<=n;i++)
    // {
    //     for( int j=1;j<=n;j++)
    //     {
    //         if (i=1 || i==n||j==1||j==n)
    //         {
    //             printf("*");
    //         }
    //         else{
    //             printf(" ");
    //         }
    //         printf("\n");
    //     }
    // }
    //  }

    // int a,b,c;
    // printf("enter a number");
    // scanf("%d %d",&a,&b);
    // c=a+b;
    // printf(" %d",c);

    int num, i, isprime;
    printf("Prime number between 1 to 100 are:");
    for (num = 2; num <= 100; num++)
    {
        isprime = 1;
        for (i = 2; i <= num % 2; i++)
        {
            if (num % i == 0)
            {
                isprime = 0;
                break;
            }
        }
        if (isprime == 1)
        {
            printf("%d", num);
        }
    }
    printf("\n");
    return 0;
}
