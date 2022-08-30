#include<iostream>
using namespace std;
int main()
{
	int n,a1,a2,a[10000];
	cin>>n;;
	for(int i=0;i<n;i++)
	{
		cin>>a1>>a2;
		if( a1%a2==0 ) a[i]=1;
		else a[i]=0;
	}
	for(int i=0;i<n;i++ )
	{
		if ( a[i]==1 ) cout<<"YES"<<"\n";
		else if ( a[i]==0 ) cout<<"NO"<<"\n";
	}
return 0;
}
		