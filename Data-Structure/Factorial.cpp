#include<iostream>
using namespace std;

int Factorial(int number) {
    if (number > 1)
        return number * Factorial(number - 1);
        
    else {
        return number;
    }
}

int main() {

    int num;
    cout << "Enter a number to find it factorial: "; cin >> num;
    int answer = Factorial(num);
    cout << "The factorial of " << num << " is: " << answer;

    return 0;
}