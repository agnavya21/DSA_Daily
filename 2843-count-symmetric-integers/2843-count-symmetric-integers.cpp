class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int cnt=0;
        for(int i=low;i<=high;i++) {
            int n=0, temp=i;
            long long sum=0;
            while(temp>0) {
                int digit=temp%10;
                n++;
                sum+=digit;
                temp/=10;
            }
            if(n%2==0) {
                int half=n/2;
                temp=i;
                long long sum2=0;
                while(half--) {
                    sum2+=temp%10;
                    sum-=temp%10;
                    temp/=10;
                }
                if(sum2==sum) cnt+=1;
            }
        }
        return cnt;
    }
};