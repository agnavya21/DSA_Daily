#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int cntEven=0, cntOdd=0;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
        if(arr[i]%2==0) cntEven++;
        else cntOdd++;
    }
    if(cntEven>cntOdd) {
        for(int i=0;i<n;i++) {
            if(arr[i]%2!=0) {
                cout << i+1;
                return 0;
            }
        }
    } else {
        for(int i=0;i<n;i++) {
            if(arr[i]%2==0) {
                cout << i+1;
                return 0;
            }
        }
    }
    return 0;
}