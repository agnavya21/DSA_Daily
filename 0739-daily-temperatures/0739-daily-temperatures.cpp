class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> answer(n,0);
        stack<pair<int,int>> st;
        for(int i=n-1;i>=0;i--) {
            while(!st.empty() && st.top().first<=temperatures[i]) {
                st.pop();
            }
            if(st.empty()) answer[i]=0;
            else answer[i] = st.top().second-i;
            st.push({temperatures[i],i});
        }
        return answer;
    }
};
        // // Traverse from right to left
        // for (int i = n - 1; i >= 0; i--) {

        //     // Pop all smaller or equal elements
        //     while (!st.empty() && st.top() <= nums[i]) {
        //         st.pop();
        //     }

        //     // If stack is empty, no greater element
        //     if (st.empty()) res[i] = -1;

        //     // Else top of stack is the answer
        //     else res[i] = st.top();

        //     // Push current element
        //     st.push(nums[i]);
        // }

        // // Return the result
        // return res;