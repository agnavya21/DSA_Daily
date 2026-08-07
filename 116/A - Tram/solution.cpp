#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int capacity=0, cnt=0;
    while(n--) {
        int a, b;
        cin >> a >> b;
        if(capacity==0) {
            cnt+=b;
            capacity=max(capacity,cnt);
        }
        else {
            cnt-=a;
            cnt+=b;
            capacity=max(capacity,cnt);
        }
    }
    cout << capacity;
    return 0;
}