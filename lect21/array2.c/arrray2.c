#include<stdio.h>
#include<stdlib.h>



int main()
{

int n;
printf( "Enter size:");
scanf("%d",&n);
int*arr=( int *)malloc(n*sizeof(int));
//int*arr=( int *)calloc(n ,sizeof(int));


printf("Enter %d element:\n",n);
for( int i=0;i<n;i++)

scanf("%d",&arr[i]);




printf("\nNow enter new size:");
int newSize;
scanf("%d",&newSize);
arr=(int *)realloc(arr,newSize*sizeof(int));
printf( "Enter %d new element:\n");



}