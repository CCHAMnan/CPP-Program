#include<iostream>
#include<conio.h>
using namespace std;
class animal{
	private :
		
		string name;
		int weight;
	protected :
		void input(){
			cout<<"Input name:";getline(cin,name);fflush(stdin);
			cout<<"Input weight:";cin>>weight;fflush(stdin);
		}
		void output(){
			cout<<"The name:"<<name<<endl;
			cout<<"The weight:"<<weight;
		}
};
class dog : public animal{
	public:
	void dogdisplay(){
		void input();
		void output();
	}
};
class cat : public animal{
	public:
	void catdisplay(){
		void input();
		void output();
	}
};
int main(){
	dog dog1;
	dog1.dogdisplay();
	cat cat1;
	cat1.catdisplay();
	
	getch();
	return 0;
}