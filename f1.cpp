#include<iostream>
using namespace std;
void display();
int main(){            //no  argument and no Return value  function.

	display();
}
void display()
{
	int a,b,ans;
	cout<<"enter a:";
	cin>>a;
	cout<<"enter b:";
	cin>>b;
	ans=a+b;
	cout<<"addition is "<<ans;
	
}
