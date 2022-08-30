#include<iostream>
using namespace std;
int main()
{
	int a,b,min,max;
	cin>>a>>b;
	if ( a>=b){
		min=b;
	}else if( b>a ){
		min=a;
	}
	max=(a+b-min*2)/2;
	cout<<min<<" "<<max;
return 0;		
}