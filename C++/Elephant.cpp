#include<iostream>
using namespace std;
int main()
{
	int n,r,sum;
	cin>>n;
	r=n/5;
	
	if ( n%5==0 )
		cout<<r;
	else
		cout<<r+1;
		
	return 0; 
}