#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int upper=0, lower=0;
    for(char ch:s) {
        if(isupper(ch)) upper++;
        else lower++;
    }
    if(lower>=upper) {
        for(char &ch:s)
            ch=tolower(ch);
    } else {
        for(char &ch:s)
            ch=toupper(ch);
    }
    cout << s;
    return 0;
}