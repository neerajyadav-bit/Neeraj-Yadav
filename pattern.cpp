#include <iostream>
using namespace std;
int main()


// {
    
//     int n ,m;
//     cout<<"Enter the value"<<endl;
//     cin>>n;
//     cin>>m;
//     for( int i=1;i<=n;i++)
//     {
//         for( int j=1;j<=m;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// {
//     int n,m;
//     cout<<" Enter the value"<<endl;
//     cin>>n>>m;
//     for(  int i=1;i<=n;i++)
//     {
//         for(  int j=1;j<=m;j++)
//         {
//             if( i==1 || j==1 ||i==n||j==m)
//             { 
//                 cout<<"*";
//             }
//             else{
//                 cout<< " ";

//             }
//         }
//         cout<<endl;
//     }

// }

// {
//     int n,m;
//     cout<<" Enter the value"<<endl;
//     cin>>n>>m;
//     for( int i=1;i<=n;i++)
//     {
//         for(int  j=1;j<=i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
// }

// {
//     int n;
//     cout<<"Enter the value"<<endl;
//     cin>>n;
//     for( int i=1;i<=n;i++)
//     {
//         for( int j=n; j>=i;j--)
//         {
//             cout<<"*";
        
//          }
//          cout<<endl;
//     }
//   return 0;
// }


{
  int n;
  cout<<" Enter the no "<<endl;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    if(i%2!=0)
    {
      cout<<i;
    }
    for( int j=1;j<=i;j++)
    {
      cout<<i;
    }
    cout<<endl;
  }
}
