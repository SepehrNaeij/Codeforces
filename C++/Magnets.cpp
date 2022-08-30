#include<iostream>
using namespace std;
int main()
{
	long long int n,t=0,a[100000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int j=0;j<n;j++)
	{
		int x=j+1;
		if ( a[j]!=a[x] )
		t++;
	}
	cout<<t;
return 0;	
}