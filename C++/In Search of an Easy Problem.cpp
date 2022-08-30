#include<iostream>
using namespace std;
int main()
{
	int n,t=0,a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>> a;
		if ( a==1 )
		t++;
	}
	if ( t>0 )
	cout<<"HARD";
	else
	cout<<"EASY";
return 0;	
}