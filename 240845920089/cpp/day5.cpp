#include<iostream>
using namespace std;
class abc{
	
	int a;
	protected:
		int b;
	public:
		int c;
		int geta(){
			return a;
		}
	abc(){
		a=5;
		b=10;
		c=20;
	}	
			
};
class derivedabc: public abc{
	public:
		int getb(){
			return b;
		}
		
		
};
int main(){
	derivedabc obj1;
	cout<<"the value of a: "<<obj1.geta()<<endl;
	cout<<"the value of b: "<<obj1.getb()<<endl;
}
