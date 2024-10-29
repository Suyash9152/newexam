#include<iostream>
using namespace std;
class abc{
	public:
	int a;
	int *b;
	abc(){
		a=10;
		b=new int;
		*b=20;
	}
	public:
	void show(){
		cout<<"the value of a is "<<a<<endl;
		cout<<"the value of b is "<<*b<<endl;	
		}
	~abc(){
		delete b;
	}
	
};
int main(){
	abc obj1;
	obj1.show();
	{
	
	abc obj2(obj1);
	obj2.show();
	}
	obj1.show();
	
}
