#include<iostream>
using namespace std;
int main() {
    int k, n, w;
    cin >> k >> n >> w;
    long long dollars=0;
    for(int i=1;i<=w;i++) dollars+=i;
    dollars*=k;
    if((dollars-n)>0) cout << dollars-n;
    else cout << 0;
    return 0;
}