#include<stdio.h>
#include<stdlib.h>



// int main()
// {

// int n;
// printf( "Enter size:");
// scanf("%d",&n);
// int*arr=( int *)malloc(n*sizeof(int));
// //int*arr=( int *)calloc(n ,sizeof(int));


// printf("Enter %d element:\n",n);
// for( int i=0;i<n;i++)

// scanf("%d",&arr[i]);




// printf("\nNow enter new size:");
// int newSize;
// scanf("%d",&newSize);
// arr=(int *)realloc(arr,newSize*sizeof(int));
// printf( "Enter %d new element:\n");



// }


// int main()

// {
//     int n=6;
//     int arr[6]={ -1,0,5,-2,0,3};
//     int*arr=( int *)malloc(n*sizeof(int));

    
// printf("Enter %d element:\n",n);
// for( int i=0;i<n;i++)

// scanf("%d",&arr[i]);

// printf("\nNow enter new size:");
// int newSize;
// scanf("%d",&newSize);
// arr=(int *)realloc(arr,newSize*sizeof(int));
// printf( "Enter %d new element:\n");



// // }





int main()
{
    int height[5]={ 2,3,2,3,1};
    int i=0;
    int j=4;
    int maxarea=0;
    while (i<j)
    {
       int h;
       if ( height[i]<height[j])
       {
        h=height[i];
       }
       else
       {
        h=height[j];
       }
       int w=j-i;
       int area=h*w;
       if(area>maxarea)
       {
        maxarea=area;

       }
       if(height[i]<height[j])
       {
        i++;
       }else{
        j--;
       }

    }
    printf("%d",maxarea);
    


}