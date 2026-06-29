class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int n=patterns.size(), cnt=0;
        for(int i=0;i<n;i++)
            if(word.find(patterns[i])!=string::npos) cnt+=1;
        return cnt;
    }
};