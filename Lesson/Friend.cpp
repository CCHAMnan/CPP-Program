#include<iostream>
using namespace std;

class lab
{
    private:
        int area;
    public:
        friend void laba(lab);
};

void laba(lab room306){
    room306.area = 100;
    cout << room306.area;
}

int main()
{
    lab room306;
    laba(room306);


}