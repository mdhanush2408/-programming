#include<iostream>
using namespace std; 
 class bca{
 	public:
 		int a,b,c;
 			add()
 			{
 			cout<<"ENTER A NUMBER";
			 cin>>a;
			 cout<<"ENTER A B VALUE";
			 cin>>b;
			 c=a+b;
			 cout<<c<<"="<<a<<"+"<<b<<"THE VALUE OF ADD IS";	
			 }
 };
 int main() 
 {
 bca obj;
 obj.add(); 
}