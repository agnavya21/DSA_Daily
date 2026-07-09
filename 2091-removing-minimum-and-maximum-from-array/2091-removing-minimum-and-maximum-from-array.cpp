class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size(), miniInd=-1, mini=INT_MAX, maxiInd=-1, maxi=INT_MIN;
        for(int i=0;i<n;i++) {
            maxi=max(maxi,nums[i]);
            mini=min(mini,nums[i]);
            if(maxi==nums[i]) maxiInd=i;
            if(mini==nums[i]) miniInd=i;
        }
        int front=max(miniInd,maxiInd)+1, back=n-min(maxiInd,miniInd), frontBack=min((miniInd+1)+(n-maxiInd),(maxiInd+1)+(n-miniInd));
        int ans=min({front,back,frontBack});
        return ans;
    }
};