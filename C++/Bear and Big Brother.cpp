#include<iostream>
using namespace std;
int main()
{
	int a,b,count=0;
	cin>>a>>b;
	for(int i=1;i<1000;i++)
	{
		count++;
		a*=3;
		b*=2;
		if ( a>b )
		break;
	}
	cout<<count;
	return 0;
}