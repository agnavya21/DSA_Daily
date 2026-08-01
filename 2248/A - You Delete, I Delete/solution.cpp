#include<iostream>
#include<string>
using namespace std;
int main() {
    int t;
    cin >>t ;
    while(t--) {
        string s;
        cin >> s;
        bool deleted=false;
        for(int i=0;i<s.size()-1;i++) {
            if(s[i]=='0' && s[i+1]=='1') {
                s.erase(i,1);
                deleted=true;
                break;
            }
        }
        if(!deleted) {
            for(int i=s.size()-1;i>=0;i--) {
                if(s[i]=='0') {
                    s.erase(i,1);
                    break;
                }
            }
        }
        for(int i=0;i<s.size();i++) {
            if(s[i]=='1') {
                s.erase(i,1);
                break;
            }
        }
        cout << s << endl;
    }
    return 0;
}