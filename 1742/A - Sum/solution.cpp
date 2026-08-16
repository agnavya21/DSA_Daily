#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int flag=0;
        if(c==(a+b)) {
            cout << "YES" << endl;
            flag=1;
            continue;
        }
        if(b==(a+c)) {
            cout << "YES" << endl;
            flag=1;
            continue;
        }
        if(a==(c+b)) {
            cout << "YES" << endl;
            flag=1;
            continue;
        }
        if(flag==0) cout << "NO" << endl;
    }
    return 0;
}