#include<iostream>
#include<string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(n!=5) {
            cout << "NO" << endl;
            continue;
        } else {
            if(s.find('T')!=string::npos &&
            s.find('i')!=string::npos && 
            s.find('m')!=string::npos && 
            s.find('u')!=string::npos && 
            s.find('r')!=string::npos) {
                cout << "YES" << endl;
                continue;
            } else {
                cout << "NO" << endl;
                continue;
            }
        }
    }
    return 0;
}