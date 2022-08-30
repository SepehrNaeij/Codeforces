#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,a,b[1000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if ( a>1000 ) b[i]=a/1111*10;
		else if ( a>100 ) b[i]=a/111*10-4;
		else if ( a>10 ) b[i]=(a/11-1)*10+3;
		else if ( a>=1 ) b[i]=a*10-9;
	}
	for(int j=0;j<n;j++)
	{
	cout<<b[j]<<"\n";
	}
return 0;	
}
