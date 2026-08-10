#include<iostream>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];
        if(arr[0]!=arr[1] && arr[0]!=arr[2]) {
            cout << 1 << endl;
            continue;
        }
        if(arr[n-1]!=arr[n-2] && arr[n-1]!=arr[n-3]) {
            cout << n << endl;
            continue;
        }
        for(int i=1;i<n-1;i++) {
            if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1]) {
                cout << i+1 << endl;;
                break;
            }
        }
    }
    return 0;
}