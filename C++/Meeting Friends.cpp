#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c,mid;
	cin>>a>>b>>c;
	if ( (a>=b && a<=c) || ( a>=c && a<=b)){
	mid=a;
	cout<<abs(mid-b)+abs(mid-c);
	}else if ( (b>=a && b<=c) || (b>=c && b<=a)){
	mid=b;
	cout<<abs(mid-a)+abs(mid-c);
	}else if ( (c>=b && c<=a) || (c>=a && c<=b)){
	mid=c;
	cout<<abs(mid-b)+abs(mid-a);
	}
return 0;	
}