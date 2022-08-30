#include<iostream>
using namespace std;
int main()
{
	int n,a=0,b=0,c=0,d=0,e=0;
	cin>>n;
	string s[10];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
		if ( s[i]=="Tetrahedron") a+=4;
		if ( s[i]=="Octahedron") b+=8;
		if ( s[i]=="Cube") c+=6;
		if ( s[i]=="Dodecahedron") d+=12;
		if ( s[i]=="Icosahedron") e+=20;
		
	}
	cout<<a+b+c+d+e;
return 0;	
}