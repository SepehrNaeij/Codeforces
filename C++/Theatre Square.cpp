#include<iostream>
using namespace std;
int main()
{
	long long int n,m,a,A,B;
	cin>>n>>m>>a;
	if ( n%a==0 ){
		A=n/a;
	}else{
		A=n/a + 1;
	}
	if ( m%a==0 ){
		B=m/a;
	}else{
		B=m/a + 1;
	}
	cout<<A*B;
	return 0;			
}