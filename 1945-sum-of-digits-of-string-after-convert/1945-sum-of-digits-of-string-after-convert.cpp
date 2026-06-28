class Solution {
public:
    int getLucky(string s, int k) {
        int sum=0;
        for(char ch:s) {
            int alphabet=ch-'a'+1;
            while(alphabet>0) {
                sum+=alphabet%10;
                alphabet/=10;
            }
        }
        while(--k) {
            int tempSum=0;
            while(sum>0) {
                tempSum+=sum%10;
                sum/=10;
            }
            sum=tempSum;
        }
        return sum;
    }
};