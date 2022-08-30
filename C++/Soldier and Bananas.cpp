#include<iostream>
using namespace std;
int main()
{
	int k,n,w,sum=0;
	cin>>k>>n>>w;
		for(int i=1;i<=w;i++)
		{
			sum+=i;
		}
	int result=(sum*k)-n;	
		if ( result>0 )
			cout<<result;
		else
			cout<<"0";	
	return 0;
}