#include<iostream>
using namespace std;
int main()
{
	int n,a,b,m=0,c=0,e=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		if ( a>b ){
		m++;
		}else if ( b>a){
		c++;
		}else if ( a==b){
		e++;
		}
		
	}
		if ( m>c ) cout<<"Mishka";
		else if ( c>m) cout<<"Chris";
		else if ( c==m) cout<<"Friendship is magic!^^";
return 0;			
}