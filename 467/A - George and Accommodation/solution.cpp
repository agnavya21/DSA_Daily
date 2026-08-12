#include<iostream>
using namespace std;
int main() {
    int n, cnt=0;
    cin >> n;
    while(n--) {
        int pi, qi;
        cin >> pi >> qi;
        if((qi-pi)>=2) cnt++;
    }
    cout << cnt;
    return 0;
}