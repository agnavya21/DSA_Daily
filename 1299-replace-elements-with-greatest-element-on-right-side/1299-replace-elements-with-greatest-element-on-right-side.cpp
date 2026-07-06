class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size(), maxi=arr[n-1];
        arr[n-1]=-1;
        if(n==1) return arr;
        for(int i=n-2;i>=0;i--) {
            int temp=arr[i];
            arr[i]=maxi;
            maxi=max(maxi,temp);
        }
        return arr;
    }
};