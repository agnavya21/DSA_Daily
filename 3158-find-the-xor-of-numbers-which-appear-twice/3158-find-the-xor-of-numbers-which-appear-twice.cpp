class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int x:nums) mpp[x]++;
        int xor1=0;
        for(auto it:mpp) {
            if(it.second==2) xor1=xor1^it.first;
        }
        return xor1;
    }
};