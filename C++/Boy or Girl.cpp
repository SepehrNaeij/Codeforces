#include<iostream>
using namespace std;
int main()
{
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,I=0,j=0,k=0,l=0,m=0,N=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
	string n;
	cin>>n;
	for(int i=0;i<n.length();i++)
	{
	if ( n[i]=='a' ) a++;
	if ( n[i]=='b' ) b++;
	if ( n[i]=='c' ) c++;
	if ( n[i]=='d' ) d++;
	if ( n[i]=='e' ) e++;
	if ( n[i]=='f' ) f++;
	if ( n[i]=='g' ) g++;
	if ( n[i]=='h' ) h++;
	if ( n[i]=='i' ) I++;
	if ( n[i]=='j' ) j++;
	if ( n[i]=='k' ) k++;
	if ( n[i]=='l' ) l++;
	if ( n[i]=='m' ) m++;
	if ( n[i]=='n' ) N++;
	if ( n[i]=='o' ) o++;
	if ( n[i]=='p' ) p++;
	if ( n[i]=='q' ) q++;
	if ( n[i]=='r' ) r++;
	if ( n[i]=='s' ) s++;
	if ( n[i]=='t' ) t++;
	if ( n[i]=='u' ) u++;
	if ( n[i]=='v' ) v++;
	if ( n[i]=='w' ) w++;
	if ( n[i]=='x' ) x++;
	if ( n[i]=='y' ) y++;
	if ( n[i]=='z' ) z++;
	}
	if ( a>0 ) a=1;
	if ( b>0 ) b=1;
	if ( c>0 ) c=1;
	if ( d>0 ) d=1;
	if ( e>0 ) e=1;
	if ( f>0 ) f=1;
	if ( g>0 ) g=1;
	if ( h>0 ) h=1;
	if ( I>0 ) I=1;
	if ( j>0 ) j=1;
	if ( k>0 ) k=1;
	if ( l>0 ) l=1;
	if ( m>0 ) m=1;
	if ( N>0 ) N=1;
	if ( o>0 ) o=1;
	if ( p>0 ) p=1;
	if ( q>0 ) q=1;
	if ( r>0 ) r=1;
	if ( s>0 ) s=1;
	if ( t>0 ) t=1;
	if ( u>0 ) u=1;
	if ( v>0 ) v=1;
	if ( w>0 ) w=1;
	if ( x>0 ) x=1;
	if ( y>0 ) y=1;
	if ( z>0 ) z=1;
	
	int sum=a+b+c+d+e+f+g+h+I+j+k+l+m+N+o+p+q+r+s+t+u+v+w+x+y+z;
	if ( sum%2==0 )
		cout<<"CHAT WITH HER!";
	else
		cout<<"IGNORE HIM!";	
	return 0;
}