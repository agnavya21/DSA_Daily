#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n=0;
    for (int i=0;i<s.size();i++) {
        if(isupper(s[i])) n++;
    }
    if(n==s.size()) {
        for(int i=0;i<s.size();i++)
            s[i]=tolower(s[i]);
    } else if(n==s.size()-1 && islower(s[0])) {
        for (int i = 0; i < s.size(); i++) {
            if (isupper(s[i]))
                s[i] = tolower(s[i]);
            else
                s[i] = toupper(s[i]);
        }
    }
    cout << s;
    return 0;
}