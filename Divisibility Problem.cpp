#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, result = 0;
    long long a, b;
    cin >> n;

    while(n)
    {
        result = 0;
        cin >> a >> b;


        if(a % b == 0)
            cout << result << endl;
        else
        {
        cout << b - a % b << endl;
//            while(a % b != 0)
//            {
//                a++;
//                result++;
//            }
//            cout << result << endl;
//
        }
        n--;
    }
    return 0;
}