#include <iostream>
using namespace std;
void swap_number(int a,int b)
{
    int c;
    c = a;
    a = b;
    b = c;

    cout << "a = " << a << "\n";
    cout << "b = " << b;
    
}

int main()
{
    swap_number(10,20);
    return 0;
}