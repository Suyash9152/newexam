//#include<iostream>
//#include<string.h>
//using namespace std;
//int main(){
//	char a[10]="car";
//	char a2[10]="car";
//	int x=strcmp(a,a2);
//	cout<<x<<endl;
//}
//#include<iostream>
//using namespace std; 
//void ustrcat(char*,char*);
//int main()
//{
//	
//	char ch[10],ch1[10];
//	cout<<"enter string\n";
//	cin>>ch;//hello
//	cout<<"enter string\n";
//	cin>>ch1;//bye
//	ustrcat(ch,ch1);
//	cout<<"concatenated string is "<<ch;
//}  
//void ustrcat(char* ch2,char* ch3)
//{
//	while(*ch2!='\0')
//	{
//		ch2++;
//	}
//	
//	while(*ch3!='\0')
//	{
//		*ch2=*ch3;
//		ch2++;
//		ch3++;
//		
//	}
//	*ch2='\0';
//
//	
// } 


#include<iostream>
using namespace std;
template <class R>
R add(R &a,R &b){
	R res=a+b;
	//return res;
}
int main(){
	int a =10;
	int b=20;
	int res=add(a,b);
	cout<<res;
}

//#include <iostream>
//using namespace std;
//template <class T> 
//T myMax(T x, T y)
//{
//    return (x > y) ? x : y;
//}
// 
//int main()
//{
//    // Call myMax for int
//    cout << myMax<int>(3, 7) << endl;
//    // call myMax for double
//    cout << myMax<double>(3.0, 7.0) << endl;
//    // call myMax for char
//    cout << myMax<char>('g', 'e') << endl;
// 
//    return 0;
//}
