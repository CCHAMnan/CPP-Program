#include<iostream>
#include <algorithm>
using namespace std;

//Show all the elements in an array
void showArray(int* num, int size) {
    for(int i = 0; i < size; i++) {
        cout << num[i] << " ";
    }
    cout << endl;
}

//Add an element to an ordered array
void insert(int element, int* num, int& size) {

    // Find the correct position to insert the element
    int *it = lower_bound(num, num + size, element);
    int inserted = it - num;

    for(int i = size - 1; i >= inserted; i--) {
        num[i + 1] = num[i];
    }

    num[inserted] = element;
    size++;
}

//Delete an element from an ordered array
void deleteElement(int element, int* num, int& size) {

    // Find the element to delete
    int *it = lower_bound(num, num + size, element);
    int inserted = it - num;

    if (it != num + size && *it == element) {
        // Shift all elements to the left
        for (int i = it - num; i < size - 1; i++) {
            num[i] = num[i + 1];
        }
        size--;
    }
}

//Binary Search
int binarySearch(int size, int searchKey, int* num) {
    int find(int searchKey);
    int lowerBound = 0;
    int upperBound = size - 1;
    int curIn;

    while(true) {
        curIn = (lowerBound + upperBound ) / 2;
        if(num[curIn]==searchKey) {
            return curIn;
        }
        else if(lowerBound > upperBound)
            return size; 
        else{ 	
            if(num[curIn] < searchKey)
                lowerBound = curIn + 1;
            else upperBound = curIn - 1;
        }
    } 
}



int main() {
    
    //Ordered array
    int num[] = {0,1,2,3,4,5,6,7,8,9};
    int size = sizeof(num) / sizeof(num[0]);

    cout << "Original Array: ";
    showArray(num,size);

    cout << "\nArray after inserted an element: ";
    insert(1,num,size);
    showArray(num,size);
    
    cout << "\nArray after deleted an element: ";
    deleteElement(1,num,size);
    showArray(num,size);

    int index = binarySearch(size, 3, num);
    cout << "\nThis element is at index: " << index;

    return 0;
}
