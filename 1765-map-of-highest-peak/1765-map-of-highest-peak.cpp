class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int n=isWater.size(), m=isWater[0].size();
	    vector<vector<int>> vis(n,vector<int>(m,0)); 
	    vector<vector<int>> dist(n,vector<int>(m,0));
	    queue<pair<pair<int,int>,int>> q;
	    for(int i=0;i<n;i++) {
	        for(int j=0;j<m;j++) {
	            if(isWater[i][j]==1) {
	                q.push({{i,j},0}); 
	                vis[i][j]=1; 
	            } else vis[i][j] = 0; 
	        }
	    }
	    int delrow[4] = {-1, 0, +1, 0}; 
	    int delcol[4] = {0, +1, 0, -1};
	    while(!q.empty()) {
	        int row=q.front().first.first, col=q.front().first.second, steps=q.front().second; 
	        q.pop(); 
	        dist[row][col]=steps;
	        for(int i=0;i<4;i++) {
	            int nrow=row+delrow[i], ncol=col+delcol[i];
	            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m 
	            && vis[nrow][ncol]==0) {
	                vis[nrow][ncol]=1; 
	                q.push({{nrow,ncol},steps+1});  
	            }
	        }
	    }
	    return dist;
    }
};