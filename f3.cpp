#include<iostream>
using namespace std;

int addition();

int main()
{                 //no argument and with Return value  function.
	int a,ans;
	
	ans = addition();
	
	cout<<"\nThe adition is : "<<ans;
	
}
int addition(){
	
	int a,b,ans;
		cout<<"enter a:";
	cin>>a;
	cout<<"enter b:";
	cin>>b;
//		int ans;
     ans = a+b;
	
	return ans;
}
