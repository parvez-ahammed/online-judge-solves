

class Solution {
public:
    #define pii pair<int,int>
    
    int row=0, col=0;
    
    void dfs(vector<vector<int>>& g2, int x,int y, vector<pii>&pts){
        
        if(x<0 || x>=row || y<0 || y>=col || g2[x][y]!=1)return;
        
        g2[x][y]=-1;
        pts.push_back({x,y});
        
        dfs(g2,x+1,y,pts);
        dfs(g2,x,y+1,pts);
        dfs(g2,x-1,y,pts);
        dfs(g2,x,y-1,pts);
    }
    
    int countSubIslands(vector<vector<int>>& g1, vector<vector<int>>& g2) {
        
        int ans=0;
        
        int i,j, n=g2.size(), m=g2[0].size();
        
        row=n, col=m;
        
        vector<vector<pii>>islands;
        
        for(i=0;i<n;i++){
            
            for(j=0;j<m;j++){
                
                if(g2[i][j]==1){
                    
                    vector<pii>pts;
                    
                    dfs(g2,i,j,pts);
                        
                    islands.push_back(pts); 
                }
                
            }
        }
        
        for(auto pts:islands){
            
            bool ok=true;
            
            for(auto par:pts){
                int x=par.first, y=par.second;
                
                if(g1[x][y]!=1){
                    ok=false;
                    break;
                }
            }
            
            if(ok)ans++;
        }
        
        return ans;
    }
};