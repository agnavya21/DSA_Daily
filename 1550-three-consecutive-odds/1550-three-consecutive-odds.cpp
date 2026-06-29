class Solution {
public:
    bool odd(int n) {
        if(n%2!=0) return true;
        return false;
    }
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n=arr.size();
        if(n==1 || n==2) return false;
        for(int i=0;i<n-2;i++) {
            if(odd(arr[i]) && odd(arr[i+1]) && odd(arr[i+2])) return true;
        }
        return false;
    }
};