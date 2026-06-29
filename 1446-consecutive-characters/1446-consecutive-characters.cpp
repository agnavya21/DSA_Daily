class Solution {
public:
    int maxPower(string s) {
        int n=s.size(), power=0, cnt=1;
        if(n==1) return 1;
        for(int i=0;i<n-1;i++) {
            if(s[i]==s[i+1]) cnt+=1;
            else cnt=1;
            power=max(power,cnt);
        }
        return power;
    }
};