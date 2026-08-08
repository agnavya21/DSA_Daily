#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >>t ;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int maxi=max({a,b,c}), mini=min({a,b,c});
        if(a!=maxi && a!=mini) cout << a << endl;
        else if(b!=maxi && b!=mini) cout << b << endl;
        else cout << c << endl;
    }
    return 0;
}