class Solution {
public:
    
    bool isValid(int x, int y, int row, int col) {
        return x >= 0 && y >= 0 && x < row && y < col;
    }

    int islandArea = 0;

    vector<vector<int>> dfs (vector<vector<int>>&  grid,int sr,int sc ){

        vector <vector<int>> colored (grid.size() , vector<int> (grid[0].size(),0));
        colored[sr][sc] = 1;

       stack < pair < int , int >>  q;
        q.push(make_pair(sr,sc));

        int dx[] = {+0, +0, +1, -1};
        int dy[] = {-1, +1, +0, +0};

        int current_area = 1;

        while( !q.empty())
        {
             int current_x = q.top().first;
             int current_y = q.top().second;
             //cout << "HITTED" << current_x  << " " << current_y <<endl;
             q.pop();

             for ( int i = 0 ; i < 4 ; i++)
             {
                int adj_x = current_x + dx[i];
                int adj_y = current_y + dy[i];

                if ( isValid(adj_x,adj_y,grid.size(),grid[0].size()))
                {
                    if (grid[adj_x][adj_y] == 1 && colored[adj_x][adj_y]  == 0)
                    {
                        q.push(make_pair(adj_x,adj_y));
                        grid[adj_x][adj_y] = 2 ;
                        colored[adj_x][adj_y] = 1;
                        current_area++;
                    }
                }
               
             }
        }
        islandArea = max(current_area, islandArea);

        return grid;
     

    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if (0 == grid.size() || 0 == grid[0].size())
            return 0;

        int islands = 0;

        vector <pair <int , int> > locs;
        for (int i = 0 ; i < grid.size() ; i++)
        {
            for (int  j = 0 ; j < grid[i].size() ;j++)
            {
                if (grid[i][j] == 1)
                {
                    locs.push_back(make_pair(i,j));
                }
            }
        }

        for ( int i = 0 ; i < locs.size() ; i++)
        {
            if (grid[locs[i].first][locs[i].second] == 1)
            {
                grid = dfs(grid, locs[i].first , locs[i].second);
                islands++;

            }
              

        }

        return islandArea;
    }
};
