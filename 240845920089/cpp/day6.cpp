#include<iostream>
using namespace std;
 class employee
 {
 	int id;
 	public:
 	   employee();
 	   employee(int);
     	void display();
 	   int findsalary()
 	 {
 		return 0;
	 }
 };
 employee::employee()
 {
 	cout<<"in default of emp"<<endl;
 	id=0;
 	
 }
 employee::employee(int i)
 {
 	cout<<"in para of emp"<<endl;
 	id=1;
 }
 void employee::display()
 {
 	cout<<"id of an emp is"<<id<<endl;
 	
 }
 class wageemployee:public employee
 {
 	int rate,hrs;
 	public:
 		wageemployee();
 		wageemployee(int,int,int);
 		void display();
 		int findsalary();
 		
 		
 };
 wageemployee::wageemployee()
 {
 	cout<<"in default of wage"<<endl;
 }
 wageemployee::wageemployee(int h,int r,int i)
 {
 	cout<<"in para of wage"<<endl;
 	hrs=h;
 	rate=r;
 	
 }
 wageemployee::findsalary()
 {
 	return hrs*rate;
 }
 void wageemployee::display()
 {
 	employee::display();
 	cout<<hrs<<endl;
	cout<<rate<<endl;
}
int main()
{
	employee *ptr;
	wageemployee we(12,15,14);
	ptr=&we;
	cout<<"salary is "<<ptr->findsalary()<<endl;
	ptr->display();
	}
 
 
 
 
 
 
 
 
 
 
