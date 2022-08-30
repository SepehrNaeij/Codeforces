#include<iostream>
using namespace std;
int main()
{
	int n,m,t=0,I=0,M=0,u=0,r=0;
	string a[10000];
	char s;
	bool b = true;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>m;
		for(int j=0;j<m;j++)
		{
			cin>>s;
			if ( s=='T'){
				t++;
			}else if ( s=='i'){
				I++;
			}else if ( s=='m'){
				M++;
			}else if ( s=='u'){
				u++;
			}else if ( s=='r'){
				r++;
			}
		}
		if ( t==1 && I==1 && M==1 && u==1 && r==1){
			a[i]="YES";
		}else{
			a[i]="NO";
		}
		t=0;
		I=0;
		M=0;
		u=0;
		r=0;
	}
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\n";
	}
	return 0;
}