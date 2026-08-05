#include<iostream>
#include<string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cntA=0, cntD=0;
    for(char ch:s) {
        if(ch=='A') cntA++;
        else cntD++;
    }
    if(cntA>cntD) cout << "Anton";
    else if(cntA<cntD) cout << "Danik";
    else cout << "Friendship";
    return 0;
}