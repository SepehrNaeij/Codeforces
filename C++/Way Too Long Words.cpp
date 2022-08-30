#include<iostream>
using namespace std;
int main()
{
	int n,t[100];
	string s,m[100],h[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		t[i]=s.length();
		if ( t[i]>10){
			m[i]=s[0];
			h[i]=s[t[i]-1];
		}else{
			m[i]=s;	
		}
	}
	for(int j=0;j<n;j++)
	{
		if ( t[j]>10 )
		cout<<m[j]<<t[j]-2<<h[j]<<"\n";
		else
			cout<<m[j]<<"\n";
	}
	
	return 0;	
}