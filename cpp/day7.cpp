#include<iostream>
using namespace std;
class Base
{
	public:
		virtual void function1()
		{
			cout<<"In fun 1"<<endl;
		}
		virtual void function2()
		{
			cout<<"In fun 2"<<endl;
		}
		virtual void function3()
		{
			cout<<"In fun 3"<<endl;
		}
};
class Derived1: public Base
{
	void function1()
	{
		cout<<"in derived fun1"<<endl;
	}
	
 };
class Derived2:public Derived1
{
	void function3()
	{
		cout<<"in derived fun3"<<endl;
	}
 };
int main()
{
	Base *ptr=new Base();
	Base *ptr1=new Derived1();
	Base *ptr2=new Derived2();
	
	ptr->function1();
	ptr->function2();
	ptr->function3();
	ptr1->function1();
	ptr1->function2();
	ptr1->function3();
	ptr2->function1();
	ptr2->function2();
	ptr2->function3();
	}
//======================================================*/

//#include<iostream>
//using namespace std;
//class demo
//{
//	int a;
//	protected:
//		int b;
//	public:
//	demo(){
//		a=10;
//		b=20;
//	}	
//	friend class F;
//};
//class F
//{
//	public:
//	void show(demo  obj)
//	{
//		cout<<"the value of a is "<<obj.a<<endl;
//		cout<<"the value of b is "<<obj.b<<endl;
//	}
//	
//};
//int main(){
//	demo D;
//	F f;
//	f.show(D);
//}


//Problems to try

//#include <iostream>    
//using namespace std;    
//class Box    
//{    
//    private:    
//        int length;    
//    public:    
//        Box()
//	{
//		length=5;
//	}.
//	+++++++++..........................................................................................
        //friend int printLength(Box*); //friend function    
//};    
//int printLength(Box*c)    
//{    
//   c->length += 10;    
//    cout<<c->length;    
//}    
//int main()    
//{    
//    Box b;    
//    cout<<"Length of box: "<< printLength(&b)<<endl;    
//    return 0;    
//}    

