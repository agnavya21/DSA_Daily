#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    cin >> s;
    string ans="";
    for(char ch:s) {
        if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' && ch!='y'&& 
        ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!='U' && ch!='Y') {
            ans+='.';
            ans+=tolower(ch);
        }
    }
    cout << ans;
    return 0;
}