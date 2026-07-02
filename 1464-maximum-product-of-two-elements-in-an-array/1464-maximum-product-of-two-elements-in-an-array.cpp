class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=0, n=nums.size();
        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                maxi=max(((nums[i]-1)*(nums[j]-1)),maxi);
            }
        }
        return maxi;
    }
};