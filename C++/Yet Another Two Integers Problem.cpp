#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long long n,a[100000],b[100000],c[100000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		int m=abs(a[i]-b[i]);
		if ( m%10==0 )
		c[i]=m/10;
		else
		c[i]=m/10+1;
	}
	for(int j=0;j<n;j++)
	{
		cout<<c[j]<<"\n";
	}
return 0;	
}