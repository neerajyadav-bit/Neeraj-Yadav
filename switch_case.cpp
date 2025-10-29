#include <iostream>
using namespace std;
int main()

// {
//     int day;
//     cout<<" Enter the day";
//     cin>>day;
//     switch( day)
//     {
//         case 1:
//         cout<<" mon"<<endl;
//         break;
//         case 2:
//         cout<<" tue"<<endl;
//         break;
//         case 3:
//         cout<<" wed"<<endl;

//         default:
//         cout<<" this is default";

//     }

// {
//  int month;
//  cout<<" Enter the month no."<<endl;
//  cin>>month;
//  switch( month)
//  {
//     case 1:
//      cout<<" january"<<endl;
//      break;
//      case 2:
//      cout<<" february"<<endl;
//      break;
//      case 3:
//      cout<<" march"<<endl;
//      break;
//      case 4:
//      cout<<" april"<<endl;
//      break;
//      case 5:
//      cout<<" may"<<endl;
//      break;
//      case 6:
//      cout<<" jun"<<endl;
//      break;
//      case 7:
//      cout<<" july"<<endl;
//      break;
//      case 8:
//      cout<<" august"<<endl;
//      break;
//      case 9:
//      cout<<" september"<<endl;
//      break;
//      case 10:
//      cout<<" october"<<endl;
//      break;
//      case 11:
//      cout<<" november"<<endl;
//      break;
//      case 12:
//      cout<<" december"<<endl;
//      break;
//      default:
//      cout<<" This is default"<<endl;

//  }

// }

// {
// int num;
//     char character;
//     cout<<" Enter the alphabet"<<endl;
//     cin>>character;

//     switch ( character)
//     {
//         case 'a':
//               cout<<" this is vowels"<<endl;
//               break;

//         case 'e':
//               cout<<" this is vowels"<<endl;
//               break;

//         case 'i':
//               cout<<" this is vowels"<<endl;
//               break;

//         case 'o':
//               cout<<" this is vowels"<<endl;
//               break;

//         case 'u':
//               cout<<" this is vowels"<<endl;
//               break;

//     default:
//     cout<<" this is consonants"<<endl;

//     }
// }


{
    int num;
    char character;
    cout << " Enter the alphabet" << endl;
    cin >> character;
    if (!isalpha(character))
    {
        cout << " This is Invalid";
    }
    else
    {

        switch (character)
        {
        case 'a':
            cout << " this is vowels" << endl;
            break;

        case 'e':
            cout << " this is vowels" << endl;
            break;

        case 'i':
            cout << " this is vowels" << endl;
            break;

        case 'o':
            cout << " this is vowels" << endl;
            break;

        case 'u':
            cout << " this is vowels" << endl;
            break;

        default:
            cout << " this is consonants" << endl;
        }
    }
}