#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a,b,c,d,e;
cin>>n;
while(n>0){
    n++;
    a=n%10;
    b=(n/10)%10;
    c=(n/100)%10;
    d=n/1000;
    if(a!=b&&b!=c&&c!=d&&a!=c&&a!=d&&b!=d)
    {
    break;}

}
cout<<n;

return 0;
}