#include<iostream>
#include<string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        string given="codeforces";
        int cnt=0;
        for(int i=0;i<10;i++) {
            if(s[i]!=given[i]) cnt++;
        }
        cout << cnt << endl;
    }
}