#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >>t ;
    while(t--) {
        int n, x;
        cin >> n >> x;
        int lastStop, dist=0, vol=0;
        for(int i=0;i<n;i++) {
            int a;
            cin >> a;
            if(dist==0) dist+=a;
            else dist=a-lastStop;
            vol=max(vol,dist);
            lastStop=a;
        }
        vol=max(vol,2*(x-lastStop));
        cout << vol << endl;
    }
    return 0;
}