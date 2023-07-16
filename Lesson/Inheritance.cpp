#include<iostream>
using namespace std;

class Lab 
{
    protected :
        int length;
        int width;
};

class room306: public Lab
{
    public :
        int cal_area;
        void input()
        {
        cout << "Input length = "; cin >> length;
        cout << "Input width = "; cin >> width;
        }
        void output()
        {
            cout << "Result = " << length*width;
        }
};

int main()
{
    room306 count;
    count.input();
    count.output();


    return 0;
}