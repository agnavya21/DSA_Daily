class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(auto &e:edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        vector<int> visited(n,0);
        int completeComponents=0;
        for(int i=0;i<n;i++) {
            if(!visited[i]) {
                queue<int> q;
                q.push(i);
                visited[i]=1;
                vector<int> nodes;
                int degreeSum=0;
                while (!q.empty()) {
                    int node = q.front();
                    q.pop();
                    nodes.push_back(node);
                    degreeSum+=adj[node].size();
                    for(auto &nbr:adj[node]) {
                        if(!visited[nbr]) {
                            visited[nbr]=1;
                            q.push(nbr);
                        }
                    }
                }
                int k=nodes.size();
                if(degreeSum==k*(k-1))
                    completeComponents++;
            }
        }
        return completeComponents;
    }
};