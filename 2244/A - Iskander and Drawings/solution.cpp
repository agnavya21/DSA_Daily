#include <iostream>
#include<string>
#include <climits>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        char ch;
        for(int i=0;i<n;i++) {
            cin >> ch;
            s+=ch;
        }
        int cnt=0, maxCnt=INT_MIN;
        for(char c:s) {
            if(c=='#') cnt++;
            else cnt=0;
            maxCnt=max(maxCnt,cnt);
        }
        if(maxCnt%2==0) cout << maxCnt/2 << endl;
        else cout << maxCnt/2+1 << endl;
    }
    return 0;
}