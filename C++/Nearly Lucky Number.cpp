#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int t=0;
	for(int i=0;i<s.length();i++)
	{
		if ( s[i]=='4' || s[i]=='7')
		t++;
	}
	if ( t==4 || t==7 )
		cout<<"YES";
	else
		cout<<"NO";
return 0;
}