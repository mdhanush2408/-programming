#include<iostream>
using namespace std;
class BCA
{

int a,b,ans,c,d,ans1;
public:
	void sum()
	{
		cout<<"ENTER A NUMBER";
		cin>>a;
		cout<<"ENTER A NUMBER B";
		cin>>b;
		ans=a+b;
		cout<<"THE VALUE OF ADD"<<ans;
}

  void add(){
  	cout<<"enter a number c";
  	cin>>c;
  	cout<<"enter a number d";
  	cin>>d;
  	ans1=c-d;
  	cout<<"the value of sub"<< ans1;
	    }
};
	int main()
	{
		BCA obj;
	
		obj.add();
		obj.sum();
	}
	