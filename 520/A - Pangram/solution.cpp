#include<iostream>
#include<string>
#include<set>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n<26) {
        cout << "NO";
        return 0;
    }
    set<char> st;
    for(char ch:s) {
        ch=tolower(ch);
        st.insert(ch);
    }
    if(st.size()==26) cout << "YES";
    else cout << "NO";
    return 0;
}