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





// int main()
// {
//     int height[5]={ 2,3,2,3,1};
//     int i=0;
//     int j=4;
//     int maxarea=0;
//     while (i<j)
//     {
//        int h;
//        if ( height[i]<height[j])
//        {
//         h=height[i];
//        }
//        else
//        {
//         h=height[j];
//        }
//        int w=j-i;
//        int area=h*w;
//        if(area>maxarea)
//        {
//         maxarea=area;

//        }
//        if(height[i]<height[j])
//        {
//         i++;
//        }else{
//         j--;
//        }

//     }
//     printf("%d",maxarea);
    


// }



struct Student
{
    char name [50];
    int RollN;
    int age;

};


// int main()
// {
//     struct  Student S1;
// S1.age=15;
//    printf("%d",S1.age);
//    printf("%d",S1.name);
//    printf("%d",S1.RollN);
      
// }


// struct Adress
// {
//     int pinCode;

// };
// struct Student
// {
//    char name[50];
//    int RollN;
//    int age;
//    struct Adress S2;
//


#include <stdio.h>
int main(){
    int letMax[6];
    // int height[12]={0,1,0,2,1,0,1,3,2,1,2};
          int height[6]=        {4,2,0,3,2,5};
    int rightMax[6];
    int water=0;
    letMax[0]=height[0];
    for(int i =1;i<6;i++){
        if(height[i]>letMax[i-1]){
            letMax[i]=height[i];
        }else{
            letMax[i]=letMax[i-1];
        }
    }
        rightMax[5]=height[5];
     for(int i =3;i>=0;i--){
        if(height[i]>rightMax[i+1]){
            rightMax[i]=height[i];
        }else{
            rightMax[i]=rightMax[i+1];
        }
    }


    for(int i=0;i<6;i++){
    int minHieght;
        if(letMax[i]<rightMax[i]){
            minHieght=letMax[i];
        }else 
        {
            minHieght=rightMax[i];
        }
        water=water+(minHieght-height[i]);
        
    }
    printf("%d",water);
    
}