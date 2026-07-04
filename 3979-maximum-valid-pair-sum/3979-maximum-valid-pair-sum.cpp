class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n=nums.size(), maxi=INT_MIN, ini=nums[0];
        for(int i=k;i<n;i++) {
            ini=max(ini,nums[i-k]);
            maxi=max(maxi,ini+nums[i]);
        }
        return maxi;
    }
};