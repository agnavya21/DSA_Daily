#include<iostream>
#include<string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string b;
        cin >> b;
        if(b.size()==2) {
            cout << b << endl;
            continue;
        }
        string a;
        a+=b[0];
        for(int i=1;i<b.size()-1;i++) {
            if(i%2!=0) a+=b[i];
        }
        a+=b[b.size()-1];
        cout << a << endl;
    }
    return 0;
}