class Solution {
public:
    long long sumAndMultiply(int n) {
        stack<int> st;
        int cnt=0;
        while(n>0) {
            if(n%10!=0) {
                st.push(n%10);
                cnt+=1;
            }
            n/=10;
        }
        long long x=0, sum=0;
        while(!st.empty()) {
            x+=st.top()*pow(10,cnt-1);
            sum+=st.top();
            st.pop();
            cnt--;
        }
        return x*sum;
    }
};