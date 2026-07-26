#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];
        if(n%2!=0) {
            cout << "NO
";
            continue;
        }
        long long maxEven=LLONG_MIN, minOdd=LLONG_MAX; 
        for(int i=0;i<n;i++) {
            if(i%2==0) minOdd=min(minOdd,arr[i]);
            else maxEven=max(maxEven,arr[i]);
        }
        if(minOdd>=maxEven+2) cout << "YES
";
        else cout << "NO
";
    }
    return 0;
}