#include<iostream>
using namespace std;

// array that store random number of 10 value
int array[] = {10, 23, 27, 34, 41, 53, 69, 72, 88, 99};

//Function called binarySearch to find the index of the same value
int binarySearch(int key, int lower, int upper) {
    //Try to guess the index by gussing the middle index of the array
    int guess = (lower + upper) / 2;
    //If found then return the value
    if(array[guess] == key)
        return guess;
    //else if lower index is bigger than upper then then it not found
    else if(lower > upper)
        return -1;
    else{
        //if the value in the array is lower than guess then search from the upper index instead
        if(array[guess] < key)
            return binarySearch(key, guess + 1, upper);
        //else if the value in the array is bigger than guess then search from the lower index instead
        else
            return binarySearch(key, lower, guess - 1);
    }
}

int main() {
    int index;
    
    cout << "Enter key: "; cin >> index;
    int answer = binarySearch(index, 0, 10);
    cout << "You key is at index: " << answer;

    return 0;
}
