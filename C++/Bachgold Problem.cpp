#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if ( n%2==0){
		cout<<n/2<<endl;
		for(int i=0;i<n/2;i++)
		{
			cout<<"2 ";
		}
	}else{
		int m=n/2;
		cout<<m<<endl;
		for(int i=0;i<m-1;i++)
		{
			cout<<"2 ";	
		}
		cout<<n-((m-1)*2);
	}
return 0;				
}