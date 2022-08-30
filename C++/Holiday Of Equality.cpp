#include<iostream>
using namespace std;
int main()
{
	int a[100],n,num,max=0,sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if ( a[i]>=max ){
		max=a[i];
		num=i;
		}
	}
	for( int j=0;j<n;j++)
	{
		sum+=a[num]-a[j];
	}
	cout<<sum;
return 0;
}