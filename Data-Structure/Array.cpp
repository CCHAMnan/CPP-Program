#include<iostream>
using namespace std;

//Show all the elements in an array
void showArray(int* num, int size) {
    for(int i = 0; i < size; i++) {
        cout << num[i] << " ";
    }
    cout << endl;
}

//Add an element to an array by its index
void insert(int element, int index, int* num, int& size) {
    for(int i = size; i > index; i--) {
        num[i] = num[i - 1];
    }
    num[index] = element;
    size++;
}

//Delete an element from an array by its index
void deleteElement(int index, int* num, int& size) {
    for (int i = index; i < size; i++) {
        num[i] = num[i + 1];
    }
    size--;
}

//Delete all the elements from an array that has the same value
void deleteAll(int element, int* num, int& size) {
    for(int i = 0; i < size; i++) {
        if(num[i] == element) {
            for(int j = i; j < size; j++) {
                num[j] = num[j + 1];
            }
            size--;
        }
    }
}

//Search for an element in the array and return its index
int search(int element, int* num, int size, int& index) {
    for(int i = index; i < size; i++) {
        if(num[i] == element) {
            return i;
        }
    }
    return -1;
}

int main() {
    
    int num[] = {2, 5, 7, 3, 8, 9, 2, 1, 2, 4};
    int size = 10;
    int element = 2;
    int index = 0;

    do { 
        index = search(element, num, size, index);
        if(index != -1) {
            cout << "Element found at index: " << index << endl;
            index++;
        }
    } while (index != -1);
    
    return 0;   
}