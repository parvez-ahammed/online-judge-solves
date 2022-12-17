class Solution {
public:

    bool isValid(int x, int y, int row, int col) {
        return x >= 0 && y >= 0 && x < row && y < col;
}

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        queue < pair < int , int > > q;
        q.push(make_pair(sr,sc));
        int src_color = image[sr][sc];
        image[sr][sc] = color;
        

        vector <vector<int>> colored (image.size() , vector<int> (image[0].size(),0));
        colored[sr][sc] = 1;

        int dx[] = {+0, +0, +1, -1};
        int dy[] = {-1, +1, +0, +0};
        int i = 0;

        while( !q.empty())
        {
             int current_x = q.front().first;
             int current_y = q.front().second;
             //cout << "HITTED" << current_x  << " " << current_y <<endl;
             q.pop();

             for ( int i = 0 ; i < 4 ; i++)
             {
                int adj_x = current_x + dx[i];
                int adj_y = current_y + dy[i];

                if ( isValid(adj_x,adj_y,image.size(),image[0].size()))
                {
                    if (image[adj_x][adj_y] == src_color && colored[adj_x][adj_y]  == 0)
                    {
                        q.push(make_pair(adj_x,adj_y));
                        image[adj_x][adj_y] = color;
                        colored[adj_x][adj_y] = 1;

                        
                        
                    }
                }
               
               

             }
            //   cout << q.size() << endl;
            //   i++ ;
            // if (i == 20)
            // break;
        }



        return image;
        
    }
};