#include<iostream>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int cnt=0;
        while(a!=b && b!=c && a!=c) {
            cnt++;
            if(a>b && a>c) {
                if(b>c) {
                    a--;
                    c++;
                } else {
                    a--;
                    b++;
                }
            }
            else if(b>a && b>c) {
                if(a>c) {
                    b--;
                    c++;
                } else {
                    b--;
                    a++;
                }
            }
            else {
                if(a>b) {
                    c--;
                    b++;
                } else {
                    c--;
                    a++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}