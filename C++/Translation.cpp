#include<iostream>
using namespace std;
int main()
{
	int t=0;
	string n1,n2;
	cin>>n1>>n2;
	int l=n1.length();
	int j=l;
	for(int i=0;i<n1.length();i++)
	{
		j--;
		if (n2[j]==n1[i])
		t++;
	}
	if(t==l)
		cout<<"YES";
	else 
		cout<<"NO";	
	return 0;
}