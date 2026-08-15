#include<iostream>
#include<set>
using namespace std;
int main() {
    int n;
    cin >> n;
    set<int> st;
    int x;
    cin >> x;
    for(int i=0;i<x;i++) {
        int xi;
        cin >> xi;
        st.insert(xi);
    }
    int y;
    cin >> y;
    for(int i=0;i<y;i++) {
        int yi;
        cin >> yi;
        st.insert(yi);
    }
    if(st.size()==n) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";
    return 0;
}