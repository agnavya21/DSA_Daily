#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int maxi=INT_MIN, cnt=0;
        for(int i=0;i<n;i++) {
            cin >> arr[i];
            maxi=max(maxi,arr[i]);
        }
        for(int i=0;i<n;i++)
            if(arr[i]==maxi) cnt++;
        cout << cnt << endl;
    }
    return 0;
}