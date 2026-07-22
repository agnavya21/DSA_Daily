#include <iostream>
#include <climits>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int sum=0, maxi=INT_MIN;
        for(int i=0;i<7;i++) {
            int x;
            cin >> x;
            sum+=x;
            maxi=max(maxi,x);
        }
        sum-=maxi;
        maxi-=sum;
        cout << maxi << endl;
    }
    return 0;
}