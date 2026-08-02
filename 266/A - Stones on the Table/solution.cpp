#include<iostream>
#include<string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt=0;
    char ch=s[0];
    for(int i=1;i<n;i++) {
        if(s[i]==ch) cnt++;
        else ch=s[i];
    }
    cout << cnt;
    return 0;
}