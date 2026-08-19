#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
    cin >> s;
    int cnt1=0, cnt2=0, cnt3=0;
    for(char ch:s) {
        if(ch=='1') cnt1++;
        if(ch=='2') cnt2++;
        if(ch=='3') cnt3++;
    }
    string ans="";
    while(cnt1>0) {
        ans+='1';
        cnt1--;
        if(cnt1 || cnt2 || cnt3)ans+='+';
    }
    while(cnt2>0) {
        ans+='2';
        cnt2--;
        if(cnt2 || cnt3) ans+='+';
    }
    while(cnt3>0) {
        ans+='3';
        if(cnt3!=1) ans+='+';
        cnt3--;
    }
    cout << ans;
    return 0;
}