#include<iostream>
using namespace std;
int main()
{
	int t,a,b,c,d,count=0,A[10000];
	cin>>t;
	for(int i=0;i<t;i++ )
	{
		cin>>a>>b>>c>>d;
		if ( b>a )
		count++;
		if ( c>a )
		count++;
		if ( d>a )
		count++;
		A[i]=count;
		count=0;
	}
	
	for(int i=0;i<t;i++)
	{
		cout<<A[i]<<endl;
	}
return 0;	
	
}