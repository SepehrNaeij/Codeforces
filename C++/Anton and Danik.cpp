#include<iostream>
using namespace std;
int main()
{
	int n,a=0,d=0;
	string s;
	cin>>n>>s;
	for(int i=0;i<s.length();i++)
	{
		if ( s[i]=='A') a++;
		if ( s[i]=='D') d++;
	}
	if ( a>d )
		cout<<"Anton";
	else if ( a<d)
		cout<<"Danik";
	else 
		cout<<"Friendship";	

return 0;
}