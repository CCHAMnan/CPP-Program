#include<iostream>
#include<queue>                                                             //Must include <queue> to use queue method
using namespace std;

int main() {

    priority_queue<int> MyQ;                                                //Create a priority queue name MyQ
    MyQ.push(3);                                                            //add an element to queue
    MyQ.push(5);                                                            //add an element to queue
    MyQ.push(1);                                                            //add an element to queue
    MyQ.push(7);                                                            //add an element to queue
    MyQ.push(2);                                                            //add an element to queue

    cout << "Priority Queue: ";                                             //print the element out
    while (!MyQ.empty()) {                                                  //check if the queue is empty 
        cout << MyQ.top() << ' ';                                           //print out the element in the queue in a priority order
        MyQ.pop();                                                          //remove an element from the queue
    }

    return 0;
}