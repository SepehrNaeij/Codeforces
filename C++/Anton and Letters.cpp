#include<bits/stdc++.h>
using namespace std;
int main(){
char s[10000];
gets(s);
set<char>b;
for(int i=0;i<strlen(s);i++){
    if(s[i]!='{'&&s[i]!='}'&&s[i]!=','&&s[i]!=' ')
        b.insert(s[i]);
}
cout<<b.size();
return 0;
}