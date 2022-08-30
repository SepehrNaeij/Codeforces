#include<iostream>
using namespace std;
int main()
{
	int n,a[10000],b[10000],c[10000],d[10000],B=0,C=0,D=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if ( i%3==1 ) B+=a[i];
		if ( i%3==2 ) C+=a[i];
		if ( i%3==0 ) D+=a[i];
	}
	if ( B>=C && B>=D )
		cout<<"biceps";
	else if ( C>=B && C>=D )
		cout<<"back";
	else 
		cout<<"chest";		
return 0;	
}