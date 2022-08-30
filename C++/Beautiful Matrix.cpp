#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,m,a[10][10];
	for(int i=0;i<=4;i++){
		for(int j=0;j<=4;j++)
		{
			cin>>a[i][j];
			if ( a[i][j]==1 ){
			n=i+1;
			m=j+1;
			}
		}
	}
	int sum=abs(m-3)+abs(n-3);
	cout<<sum;
return 0;
}