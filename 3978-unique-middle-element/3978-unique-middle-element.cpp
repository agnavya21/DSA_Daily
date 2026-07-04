class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n=nums.size(), midEl=nums[n/2];
        for(int i=0;i<n;i++)
            if(i!=n/2 && nums[i]==midEl) return false;
        return true;
    }
};