#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int cnt=0;
    while(n--) {
        int p, v, t;
        cin >> p >> v >> t;
        int cnt1=0;
        if(p==1) cnt1++;
        if(v==1) cnt1++;
        if(t==1) cnt1++;
        if(cnt1>=2) cnt+=1;
    }
    cout << cnt;
    return 0;
}