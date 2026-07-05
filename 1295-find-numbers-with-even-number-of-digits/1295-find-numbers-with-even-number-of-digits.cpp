class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size(), cnt=0;
        for(int i=0;i<n;i++) {
            int digitCnt=0;
            while(nums[i]>0) {
                int digit=nums[i]%10;
                digitCnt+=1;
                nums[i]/=10;
            }
            if(digitCnt%2==0) cnt+=1;
        }
        return cnt;
    }
};