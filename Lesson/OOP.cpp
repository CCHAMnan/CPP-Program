#include<iostream>
using namespace std;

class Lab
{
private:
    int length, width;
public:
void input(){
    cout << "Input length = "; cin >> length;
    cout << "Input width = "; cin >> width;
}

void output(){
    cout << "The Area = "<<length*width;
}

};
int main()
{
    Lab count;
    count.input();
    count.output();

    return 0;

}



