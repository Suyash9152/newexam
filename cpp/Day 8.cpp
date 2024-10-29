#include<iostream>
using namespace std;
class A{
	int r,i;
	public:
	A();
	A(int ,int);
	void print();
	A operator+(A&);
	A operator-(A&);
};
A::A()
{
	r=i=0;
}
A::A(int r, int i)
{
	this->r=r;
	this->i=i;
}
A A::operator-(A& b)
{
	A temp;
	temp.r=this->r - b.r;
	temp.i=this->i - b.i;
	return temp;
	
}
A A::operator+(A& c)
{
	A temp;
	temp.r=this->r + c.r;
	temp.i=this->i + c.i;
	return temp;
}
void A:: print()
{
	cout<<r<<endl;
	cout<<i<<endl;
}

int main(){
	A a1(3,6);
	A a2(4 ,8);
	A a3=a1-a2;//a3=a1.operator-(a2)
	A a4=a1+a2;
	a3.print(); 
	
}
