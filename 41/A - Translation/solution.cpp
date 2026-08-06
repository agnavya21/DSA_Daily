#include<iostream>
#include<string>
using namespace std;
int main() {
    string s, t;
    cin >> s >> t;
    if(s.size()!=t.size())  {
        cout << "NO";
        return 0;
    }
    for(int i=0;i<s.size();i++) {
        if(s[i]!=t[t.size()-i-1]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}