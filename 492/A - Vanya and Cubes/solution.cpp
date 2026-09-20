#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    long long sum=0, sum2=0;
    int i=1;
    while(sum<=n) {
        sum2+=i;
        sum+=sum2;
        if(sum>n) {
            cout << i-1;
            break;
        } else if(sum==n) {
            cout << i;
            break;
        }
        i++;
    }
    return 0;
}