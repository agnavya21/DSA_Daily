class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size(), s=INT_MAX, l=INT_MIN;
        for(int i=0;i<n;i++) {
            s=min(s,nums[i]);
            l=max(l,nums[i]);
        }
        return gcd(s,l);
    }
};