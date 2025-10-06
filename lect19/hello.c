#include <stdio.h>
int main()
{
    int arr[3][3]={ { 1,2,3},{ 1,2,3},{ 1,2,3}};
    int arr2[3][3];
    for( int  i=0; i<3;i++)
    {
        for( int j=0;j<3;j++)
        {
            arr2[i][j]=arr[i][ 2-j];

        }
    }
    for( int i=0;i<3;i++)
    {
        for( int j=0;j<3;j++)
        {
            printf(" %d",arr2[i][j]);

        }
        printf("\n");
    }


}

