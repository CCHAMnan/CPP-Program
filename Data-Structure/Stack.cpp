#include<iostream>
#include<stack>

using namespace std;

int main(){

    stack<int> MyStack;                                                                     //Create an object named MyStack
    MyStack.push(10);                                                                       //Add 10 to MyStack
    MyStack.push(20);                                                                       //Add 20 to MyStack
    MyStack.push(30);                                                                       //Add 30 to MyStack
    MyStack.push(40);                                                                       //Add 40 to MyStack
    MyStack.push(50);                                                                       //Add 50 to MyStack

    cout << "\nThe size of this stack is: " << MyStack.size();                              //Print out the size of the stack
    
    MyStack.pop();                                                                          //remove the last element from the stack
    MyStack.pop();                                                                          //remove the last element from the stack
    cout << "\nThe size of this stack now is: " << MyStack.size();                          //Print out the size of the stack
    
    cout << "\nThe value of the last element in the stack is: " << MyStack.top();           //Peek to see the last number
                                                       
    cout << "\nIs the stack empty?: " << MyStack.empty();                                   //print out the value to see if stack is empty or not
    
    while(!MyStack.empty()) {                                                               //Loop to empty the stack
        MyStack.pop();                                                                      //remove the last element from the stack
    }

    cout << "\nIs the stack empty?: " << MyStack.empty();                                   //Check to see if the stack is empty
    
    return 0;
}