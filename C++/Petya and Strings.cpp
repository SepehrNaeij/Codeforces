#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  string a,b;
  int i;
  cin>>a>>b;
  for(i = 0; i <a.size(); i++)
  {
    a[i]=tolower(a[i]);
    b[i]=tolower(b[i]);

  }
  if(a==b)
  {
    cout<<"0"<<endl;
  }
  else
  {
    for(i =0; i < a.size(); i++)
    {
      if(a[i]<b[i])
      {
        cout<<"-1"<<endl;
        break;
      }
      if(a[i]>b[i])
      {
        cout<<"1"<<endl;
        break;
      }

    }

  }
return 0;
}