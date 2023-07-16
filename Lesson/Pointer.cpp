#include<iostream>
using namespace std;

// int main()
// {
//     long number = 12345;

//     long* pnumber;

//     pnumber = &number;

//     cout << "number : " << number << "\n";
//     cout << "*pnumber : " << *pnumber << "\n";
//     cout << "pnumber : " << pnumber << "\n";

//     return 0;
// }

int main()
{
    const char* pday1 = "Sunday";
    const char* pday2 = "Monday";
    const char* pday3 = "Tuesday";
    const char* pday4 = "Wednesday";
    const char* pday5 = "Thursday";
    const char* pday6 = "Friday";
    const char* pday7 = "Saturday";

    int choice = 0;
    cout << endl
    << "Draw a lucky day! \n"
    << "Enter a number between 1 and 7: ";
    cin >> choice;
    cout << endl;

    switch (choice)
    {
    case 1:
        cout << pday1;
        break;
    case 2:
        cout << pday2;
        break;
    case 3:
        cout << pday3;
        break;
    case 4:
        cout << pday4;
        break;
    case 5:
        cout << pday5;
        break;
    case 6:
        cout << pday6;
        break;
    case 7:
        cout << pday7;
        break;
    default:
        break;
    }

    return 0;
}