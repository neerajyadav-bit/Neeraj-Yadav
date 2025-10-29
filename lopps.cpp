#include <iostream>
using namespace std;
int main()

// {
//     int n;
//     cout<<" Enter the number"<<endl;
//     cin>>n;
//     int sum=0;
//     int i=1; //loop variable

//     while ( i<=n) //condition
//     {
//         sum+=i;
//         i++; //updating loop variable

//     }
//     cout<<sum<<endl;

// }

// {
// int n;
// cout<<"  Enter the No."<<endl;
// cin>>n;

//  int sum=0;
//  for( int i=1; i<=n; i++)
//  {
//     sum+=i;
//  }
//  cout<<sum<<endl;

//  return 0;
//}

// {
//     int i =5;
//    while ( true)
//    {
//      if( i%7==0)
//      {
//         cout<<i<<endl;
//         break;
//     }
//     i+=5;
//    }

// }

// {
//     int n;
//     cout<<" Enter the value"<<endl;
//     cin>>n;
//     int sum=0;
//     do{
//         int num;
//         cout<<" Enter the num"<<endl;
//         cin>>num;
//         sum+=num;
//         n--;
//     }
//     while( n>0);
//     cout<<sum<<endl;
//     return 0;
// }

// {
//     int i=1;
//     while ( i<6)
//     {
//         if( i==3)
//         {
//             i++;
//         continue;
//         }
//         cout<<i<<endl;
//         i++;
//     }
//     return 0;

// }

// {
//     int i=1;
//     while ( i<=50)
//     {
//         if( i%3==0)
//         {
//             i++;
//        continue;

//         }

//         cout<<i<<endl;
//         i++;
//     }

//     return 0;
// }

// {
// int i = 0;
// while (i < 5) {
//     if (i == 2)
//     {
//         i++;
//         continue;
//     }
//     cout << i << endl;
//     i++;
// }
// }
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         if (i == 10)
//         {
//             cout << "Reached 10" << endl;
    
//         }
//     }
// }

// {
//     int i = 10;
// while (i >= 0) {
//     cout << i << endl;
//     i--;
// }
// }


// {

// int i; // THIS IS WRONG.hamko kuch na kuch lena padhega.
// // int i=n; 
// while (i < 5) {
//     cout << i << endl;
//     i++;
// }
// }


{
    int n ,m;
    cout<<"Enter the value"<<endl;
    cin>>n;
    cin>>m;
    for( int i=1;i<=n;i++)
    {
        for( int j=1;j<=m;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}