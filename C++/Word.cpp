#include <iostream>
using namespace std;

int main() {
    string s;
    string newstring;
    cin >> s;

    int len = s.length();
    int upper = 0;
    int lower = 0;

    for (int i = 0; i < len; i++) {
        if (isupper(s[i]))
            upper++;
        else
            lower++;
    }

    for (int i = 0; i < len; i++){
        if (upper > lower) {
            newstring = toupper(s[i]);
            cout << newstring;
        }
    else {
            newstring = tolower(s[i]);
            cout << newstring;

        }
    }
    return 0;
}