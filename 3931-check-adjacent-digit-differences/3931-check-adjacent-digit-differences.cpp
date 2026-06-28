class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int n=s.size(), diff=0;
        for(int i=0;i<n-1;i++) {
            if(abs(s[i]-s[i+1])<=2) diff=1;
            else {
                diff=0;
                break;
            }
        }
        return diff;
    }
};