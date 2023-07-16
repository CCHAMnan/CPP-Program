#include<iostream>
using namespace std;

//=================================Class Link====================================
class Link{
    public:
        int Value;  //store value
        Link *Next; //store pointer
        Link(){ Next = NULL; }; //constructor
};
//================================Class LinkedList===============================
class LinkedList{
    Link *pFirst; //first pointer
    public:
        LinkedList(){ pFirst = NULL; }; //constructor
        void InserFirst( int NewValue ); //Insert NewValue to the first 
        void PrintLinkedList(); //print out LinkList
        void RemoveFirst(); //Remove the first value
};
//==============================RemoveFirst Method================================
void LinkedList::RemoveFirst(){
    Link* pCurrent = pFirst; //store first pointer to pCurrent
    pFirst = pCurrent->Next; //store first pointer with the next pointer
    delete pCurrent; //Remove the pCurrent
};
//===============================InsertFirst Method===============================
void LinkedList::InserFirst( int NewValue ){
    Link* NewLink = new Link(); //create object call NewLink
    NewLink->Value = NewValue; //store the value to nextValue
    NewLink->Next = pFirst;  //Store the next pointer to the first pointer
    pFirst = NewLink; //Store the fisrt pointer with the Newlink
};
//==============================PrintLinkedList===================================
void LinkedList::PrintLinkedList(){
    Link* pCurrent = pFirst; //store  first pointer to the current pointer
    while (pCurrent != NULL ){ //loop until current pointer is NULL
        cout << pCurrent -> Value << " "; //print the current value
        pCurrent = pCurrent -> Next; //store the current pointer with the next pointer
    }
    cout<<endl;
};
//==================================Main==========================================
int main() {

    LinkedList myLinkList;
    myLinkList.InserFirst(10);
    myLinkList.InserFirst(20);
    myLinkList.InserFirst(30);
    myLinkList.InserFirst(40);
    myLinkList.RemoveFirst();
    myLinkList.PrintLinkedList();


    return 0;
}
//================================================================================