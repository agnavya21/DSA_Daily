#include<iostream>
using namespace std;
int main() {
    int n, h;
    cin >> n >> h;
    int width=0;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        if(x<=h) width++;
        else width+=2; 
    }
    cout << width;
    return 0;
}