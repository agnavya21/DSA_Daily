#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int maxi=0;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
        maxi=max(maxi,arr[i]);
    }
    int cnt=0;
    for(int i=0;i<n;i++) {
        if(arr[i]!=maxi) cnt+=(maxi-arr[i]);
    }
    cout << cnt;
    return 0;
}