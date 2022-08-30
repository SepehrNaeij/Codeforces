#include <iostream>
using namespace std;
int main()
{
	int a,b,m,r=0;
	cin>>a>>b;
	for(int p=a+1;p<=b;p++)
	{
		r=0;
		for(int i=1;i<=b;i++)
		{
			if ( p%i==0 )
			r++;
		}
		if ( r==2 ){
		m=p;
		break;
		}
	}
	if ( m==b )
		cout<<"YES";
	else
		cout<<"NO";
return 0;			
}