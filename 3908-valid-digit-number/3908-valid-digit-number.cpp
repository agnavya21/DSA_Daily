class Solution {
public:
    bool validDigit(int n, int x) {
        int flag=0;
        while(n>9) {
            int digit=n%10;
            if(digit==x) flag=1;
            n/=10;
        }
        return (flag && n!=x);
    }
};