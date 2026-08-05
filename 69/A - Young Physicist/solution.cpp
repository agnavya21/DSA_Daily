#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int xRes=0, yRes=0, zRes=0;
    while(n--) {
        int xi, yi, zi;
        cin >> xi >> yi >> zi;
        xRes+=xi;
        yRes+=yi;
        zRes+=zi;
    }
    if(!xRes && !yRes && !zRes) cout << "YES";
    else cout << "NO";
    return 0;
}