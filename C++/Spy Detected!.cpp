#include<iostream>
using namespace std;
int main()
{
	int n,m,a[100],b[100],max=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m;
		for(int j=0;j<m-1;j++){
			cin>>a[j];
			if ( a[j]!=a[j+1] ){
			b[i]=j;
			break;
			}
		}
		max=0;
	}
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<"\n";
	}
return 0;
}
