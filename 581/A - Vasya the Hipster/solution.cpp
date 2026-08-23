#include<iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int cnt1=min(a,b);
    int cnt2=0;
    if(a<b) {
        b-=a;
        cnt2+=(b/2);
    } else {
        a-=b;
        cnt2+=(a/2);
    }
    cout << cnt1 << " " << cnt2;
    return 0;
}