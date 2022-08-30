#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c,count=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b>>c;
		if ( (a==1 && b==1) || (a==1 && c==1) || (b==1 && c==1))
		count++;
	}
	cout<<count;
	return 0;	
}