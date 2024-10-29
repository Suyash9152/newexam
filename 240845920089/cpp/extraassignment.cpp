//#include<iostream>
//using namespace std;
//
////class abc{
////	public:
////	int a,b;
////
////void swap(int &c,int &d){
////	this->a=*c;
////	this->b=*d;
////}
////};
//int main(){
//	
//	int a=10;
//	int b=20;
//		cout<<"the values of a and b before swap: "<<a<<" "<<b<<endl;
//	a=a+b;
//	b=a-b;
//	a=a-b;
////
////	abc b1;
////	b1.swap(&a,&b);
//	cout<<"the values of a and b after swap: "<<a<<" "<<b<<endl;
//}
//==========================================================	
	//palindrome
//#include<iostream>
//using namespace std;
//int main(){
//	int num,num1;
//	cout<<"Enter any number to palindrom"<<endl;
//	cin>>num;
//	num1=num;
//	int remainder=0;
//	int pal=0;
//	while(num!=0){
//		remainder = num % 10;
//		pal=pal*10+remainder;
//		num = num/10;
//		
//	}
//	
//	if(num1== pal)
//	{
//		cout<<pal;
//		cout<<" "<<"Number is palimdrom number";
//	}
//	else
//	{
//		cout<<"Number is not a palindrom number";
//	}
//}	
//===========================================================
//prime number 
//#include<iostream>
//using namespace std;
//int main(){
//	int total cnt=0;
//	int prime=2;
//	int cnt=0;
//	
//	while(cnt<=25){
//		bool isPrime = true;
//		int i=2;
//		while(i<=prime){
//				if(prime%i==0)
//				{
//					isPrime=false;
//					break;
//					//i++;
//				}
//				i++;
//				prime++;
//			
//				}if(isPrime)
//					{
//					cout<<prime;
//					cnt++;
//					}
//		
//		
//	}
//}

//factorial

//#include<iostream>
//using namespace std;
//int main(){
//	
//	int j=5;
//	while(j<=8){
//		int factorial=1;
//for(int i=j;i>0;i--){
//	factorial*=i;
//	
//}
//cout<<"The factorial of "<<j<<" is "<<factorial<<"."<<endl;
//j++;
//}
//}

//reverse a number=======================================================
//#include<iostream>
//using namespace std;
//int main()
//{
//	int rev,num,rem;
//	rev=0;
//	cout<<"Enter any number to reverse";
//	cin>>num;
//	while(num!=0)
//	{
//		rem= num%10;
//		rev = rev*10 +rem;
//		num= num/10;
//	}
//	cout<< "reverse number is: "<<rev;
//	
//}
//=========================================================================

// DISPLAY SUMMATION OF  EVEN AND ODD NUMBERS IN AN ARRAY OF INTEGERS.

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a1[]={2,4,6,8,10};
//	int a2[]= {1,3,5,7,9};
//	int a3[5];
//	 cout<<"Elements of a3[]"<<endl;
//	for(int i=0; i<5; i++)
//	{
//		a3[i]= a1[i]+a2[i];
//		cout<<a3[i];
//		cout<<" ";
//	}
//}
//====================================================================
//Program to Find number of Digits in any number

//#include<iostream>
//using namespace std;
//int main()
//{
//   int count=0,num;
//   cout<<"Enter any number to count digits ";
//   cin>>num;	
//   while(num!=0)
//   {
//   	    num= num/10;
//   	    count++;
//   }
//   cout<<"Count is "<<count;
//}
//======================================================================

//WRITE A CPP PROGRAM TO CHANGE THE CASE OF EACH CHARACTER IN A GIVEN STRING.

//#include<iostream>
//#include<string>
//using namespace std;
//
//int main(){
//	char str[10];
//	cout<<"enter any string "<<endl;
//	cin>>str;
//	int strlen=15;
//	for(int i=0;i<strlen;i++)
//	{
//		if(isupper(str[i])){
//			str[i]=tolower(str[i]);
//		}
//		else
//		{
//			str[i]=toupper(str[i]);
//		}
//		cout<<str[i];
//	}
//	
//}
//============================================================================
//remove all special characters from a given string.
//#include<iostream>
//using namespace std;
//int main()
//{
//    string str;
//    cout<<"Enter string: ";
//    cin>>str;
//    string temp=" ";
//
//    for(int i=0; i<str.size();++i)
//    {
//        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
//        {
//            temp=temp+ str[i];
//        }
//    }
//    str = temp;
//    cout<<"Modified string is: "<<str;
//}




//Write a template fun swap() to swap the variable of int ,char and complex.
//#include<iostream>
//using namespace std;

//template<class T>
//T swap_numbers(T& x, T& y)
//{
//    T t;
//    t = x;
//    x = y;
//    y = t;
//}
//int main()
//{
//    int a,b;
//    double p,q;
//    char g,e;
//
//    a = 10; b = 20;
//    swap_numbers(a,b);
//    cout<<a<<" "<<b<<endl;
//
//    p = 3.7; q = 4.8;
//    swap_numbers(p,q);
//    cout<<p<<" "<<q<<endl;
//
//    g = 't';e = 'v';
//    swap_numbers(g,e);
//    cout<<g<<" "<<e<<endl;
//    
//}

//transpose
//#include<iostream>
//using namespace std;
//int main(){
//	cout<<"the array of integers are: "<<endl;
//	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//	for(int i=0;i<3;i++){
//	for(int j=0;j<3;j++){
//		cout<<arr[i][j]<<" ";
//	}
//	cout<<"\n";
//}
//	cout<<"the transpose of array of integers are: "<<endl;
//	for(int i=0;i<3;i++){
//	for(int j=0;j<3;j++){
//		cout<<arr[j][i]<<" ";
//	}
//	cout<<"\n";
//}
//}


















