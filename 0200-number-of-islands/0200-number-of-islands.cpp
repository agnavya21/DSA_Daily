class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size(), m=grid[0].size(), cnt=0;
        vector<vector<int>> vis(n,vector<int>(m,0));
        int drow[4]={-1,0,1,0};
        int dcol[4]={0,1,0,-1};
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(grid[i][j]=='1' && vis[i][j]==0) {
                    cnt++;
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    vis[i][j]=1;
                    while(!q.empty()) {
                        int row=q.front().first, col=q.front().second;
                        q.pop();
                        for(int i=0;i<4;i++) {
                            int nrow=row+drow[i], ncol=col+dcol[i];
                            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m &&
                            vis[nrow][ncol]==0 && grid[nrow][ncol]=='1') {
                                q.push({nrow,ncol});
                                vis[nrow][ncol]=1;
                            }
                        }
                    }
                }
            }
        }
        return cnt;
    }
};