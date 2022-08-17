#include<iostream>
using namespace std;

int cube(int n);

int main(){       //with argument and no Return value  function.
	int a,ans;
	
		cout<<"\nEnter A number for its cube : ";
	cin>>a;
	ans = cube(a);
	
	cout<<"\nThe cube of "<<a<<" is : "<<cube(a)<<endl;
	
}
int cube(int n){
	
		int ans;
ans = (n*n*n);
	
}
