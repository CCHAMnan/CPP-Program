#include <iostream>
using namespace std;
int main()
{

// cout << "The best place to start is the beginning\n";
// int num;
// cout << "Please enter any number: ";
// cin >> num;
// cout << "So your favorite number is " << num;


// int arr[5]={1,2,3,4,5};
// char Arr[10]="Chamnan";
// for (int i = 0; i <= 4; i++)
// {
//     cout << arr[i] << "\n";
// }
// cout << "--------------------------\n";
// cout << sizeof(arr)/sizeof(arr[0]);

// int m3_scoreboard[10];
//     for (int num = 0; num <= 9; num++)
//     {   
//         cout << "Enter score = ";
//         cin >> m3_scoreboard[num];
//     }

// cout << "Your array contains the following 10 numbers: \n";
// cout << "=======================================\n";

//     for (int i = 0; i<=9; i++)
//     {
//         cout << m3_scoreboard[i] << "\t";
//     }

int scoreboard[3][3];
for (int col = 0; col <=2; col++)
{
    for (int row = 0; row <=2; row++)
    {
        cout << "Block for " << col << "," << row << "= ";
        cin >> scoreboard[col][row];
    }
    
}
cout << "Output: ";
for (int i = 0; i <=2; i++)
{   
    cout << "\n";
    for (int j = 0; j <= 2; j++)
    {
        cout << scoreboard[i][j] << " ";
    }
    
}



return 0;
}
    

