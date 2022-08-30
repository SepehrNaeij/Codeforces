#include<iostream>
using namespace std;
int main()
{
	int min,n1,n2,n3,a1,a2,a3,a4,a5,a6,a7,a8;
	cin>>a1>>a2>>a3>>a4>>a5>>a6>>a7>>a8;
	n1=a2*a3/a7;
	n2=a4*a5;
	n3=a6/a8;
	if ( n1<=n2 && n1<=n3) min=n1;
	if ( n2<=n1 && n2<=n3) min=n2;
	if ( n3<=n2 && n3<=n1) min=n3;
	cout<<min/a1;
return 0;
}