#include<iostream>
using namespace std;

//Create a function to sort the array in an ascending or descending order depending on the user 
void sort(int* arr, int size) { //create 2 arguments to store an array and size of the array
    
    
    string choice;  //string to store the choice user want to make(ascending or descending)
    int temp;        //to store a temporary number

    //Ask the user to enter a choice
    cout << "Do you want to sort it by ascending or descending order?(up / down): "; cin >> choice;

    //loop the number of sorted element
    for(int i = 0; i < size - 1; i++) {

        //loop to swap the number in the array
        for(int j = 0; j < size - i - 1; j++) {

            //if choice is ascending
            if(choice == "up") {

                //compare the index of j to the next index if the first index is bigger
                if(arr[j] > arr[j + 1]) {
                    temp = arr[j];       //let temp store the number in index j in the array
                    arr[j] = arr[j + 1]; //let index j store a new number in index j + 1(the next index)
                    arr[j + 1] = temp;   //store the next index to a new number in temp;
                }
            }
            
            //if choice is descending
            else {
                if(choice == "down") {

                    //compare the index of j to the next index if the first index is smaller
                    if(arr[j] < arr[j + 1]) {
                        temp = arr[j];       //let temp store the number in index j in the array
                        arr[j] = arr[j + 1]; //let index j store a new number in index j + 1(the next index)
                        arr[j + 1] = temp;   //store the next index to a new number in temp;
                }
                }
            }
        }
    }
}


int main() {

    int arr[10] = {3,2,4,5,1,9,7,8,0,6};
    int size = 10;

    sort(arr,size);
    
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}