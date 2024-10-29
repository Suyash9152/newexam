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
//	}
//        friend int printLength(Box); //friend function    
//};    
//int printLength(Box b)    
//{    
//   b.length += 10;    
//    return b.length;    
//}    
//int main()    
//{    
//    Box b;    
//    cout<<"Length of box: "<< printLength(b)<<endl;    
//    return 0;    
//}
  


//#include<iostream>
//using namespace std;
//class abc{
//	public:
//	static int a;
//
//	abc(){
//		a++;
//	}
//	static int show(){
//		return a;
//	}
//	
//};
//int abc::a;
//int main(){
//	cout<<abc::show()<<endl;
//}

//#include <iostream>
//using namespace std;
// 
//class Player
//{
//private:
//    int ab;
//    static int next_ab;
//public:
//    int getID() { return ab; }
//    Player()  {  id = next_ab++; }
//};
//int Player::next_ab = 1;
// 
//int main()
//{
//  Player p1;
//  Player p2;
//  Player p3;
//  cout << p1.getID()<< " ";
//  cout << p2.getID()<< " ";
//  cout << p3.getID();
//  return 0;
//} 

/*#include<iostream> 
   
using namespace std; 
class Base1 { 
 public: 
     Base1() 
     { cout << " Base1's constructor called" << endl;  } 
}; 
   
class Base2 { 
 public: 
     Base2() 
     { cout << "Base2's constructor called" << endl;  } 
}; 
   
class Derived: public Base1, public Base2 { 
   public: 
     Derived() 
     {  cout << "Derived's constructor called" << endl;  } 
}; 
   
int main() 
{ 
   Derived d; 
   return 0; 
}=============================================*/

/*#include <iostream>   
using namespace std; 
  
class Base1 { 
 public: 
     ~Base1()  { cout << " Base1's destructor" << endl; } 
}; 
    
class Base2 { 
 public: 
     ~Base2()  { cout << " Base2's destructor" << endl; } 
}; 
    
class Derived: public Base1, public Base2 { 
   public: 
     ~Derived()  { cout << " Derived's destructor" << endl; } 
}; 
    
int main() 
{ 
   Derived d; 
   return 0; 
} ======================================*/
#include<iostream>
using namespace std; 
class P { 
public: 
   void print()  { cout <<" Inside P"; } 
}; 
   
class Q : public P { 
public: 
   void print() { cout <<" Inside Q"; } 
}; 
   
class R: public Q { }; 
   
int main(void) 
{ 
  R r;  
  r.print(); 
  return 0; 
} 
