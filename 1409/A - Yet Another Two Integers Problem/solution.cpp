#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        if(a==b) {
            cout << 0 << endl;
            continue;
        }
        int diff=(abs(a-b)), cnt=diff/10;
        if(diff%10!=0) cnt++;
        cout << cnt << endl;
    }
    return 0;
}