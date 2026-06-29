class Solution {
public:
    int binaryGap(int n) {
        if(n==1 || n==2) return 0;
        string binary= "";
        while(n>0) {
            binary=char('0'+(n%2))+binary;
            n/=2;
        }
        int prev=-1, ans=0;
        for(int i=0;i<binary.size();i++) {
            if(binary[i]=='1') {
                if(prev!=-1) ans=max(ans,i-prev);
                prev=i;
            }
        }
        return ans;
    }
};