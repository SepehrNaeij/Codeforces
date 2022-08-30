#include<iostream>
using namespace std;
int main()
{
	int n,m,a,sum=0;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if ( a%m==0 )
			sum+=a/m;
		else
			sum+=(a/m)+1;	
	}
	cout<<sum;
return 0;	
}