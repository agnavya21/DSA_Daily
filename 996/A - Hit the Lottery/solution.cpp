#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int bills=0;
    if(n>=100) {
        int cnt=n/100;
        bills+=cnt;
        n=n-(cnt*100);
    }
    if(n>=20) {
        int cnt=n/20;
        bills+=cnt;
        n=n-(cnt*20);
    }
    if(n>=10) {
        int cnt=n/10;
        bills+=cnt;
        n=n-(cnt*10);
    }
    if(n>=5) {
        int cnt=n/5;
        bills+=cnt;
        n=n-(cnt*5);
    }
    if(n>=1) {
        int cnt=n;
        bills+=cnt;
    }
    cout << bills;
    return 0;
}