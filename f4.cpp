#include<iostream>
using namespace std;
int addition(int a,int b);
int main()
{
	int a,b,ans1;
	cout<<"enter a:";
	cin>>a;
	cout<<"enter b:";
	cin>>b;
	ans1=addition(a,b);
	cout<<"addition is "<<ans1;
	return 0;	
}
int addition(int a, int b)
{
	int ans;
	ans=a+b;
	return ans;
}
