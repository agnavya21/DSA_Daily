#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
    cin >> t;
    while(t--) {
        long long x, y, flag=0;
        cin >> x >> y;
        if(y<=2*x) {
            cout << "NO
";
            continue;
        }
        for(long long i=2LL*x;i<y;i+=x) {
            if(i%x==0 && y%i!=0) {
                cout << "YES
";
                flag=1;
                break;
            }
        }
        if(flag==0) {
            cout << "NO
";
            continue;
        }
    }
    return 0;
}