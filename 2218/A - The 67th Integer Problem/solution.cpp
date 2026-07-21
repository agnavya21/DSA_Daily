#include<iostream>;
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n==67 || n<0) cout << n << endl;
        else cout << n+1 << endl;
    }
    return 0;
}