class Solution {
public:
    bool checkDivisibility(int n) {
        long long sum=0, prod=1;
        int temp=n;
        while(n>0) {
            int digit=n%10;
            sum+=digit;
            prod*=digit;
            n/=10;
        }
        long long total=sum+prod;
        if(temp%total==0) return true;
        return false;
    }
};