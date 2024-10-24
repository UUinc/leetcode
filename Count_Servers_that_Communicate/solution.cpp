class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int computers = 0;
        int len = grid.size();
        int len2 = grid[0].size();

        for(int i=0; i<len; i++)
        {
            for(int j=0; j<len2; j++)
            {
                if(grid[i][j] == 1)
                {
                    int tmp = computers;
                    for(int top=i-1; top>= 0; top--)
                    {
                        if(grid[top][j] == 1) 
                        {
                            computers++;
                            break;
                        }
                    }
                    if(tmp != computers) continue;
                    for(int left=j-1; left>= 0; left--)
                    {
                        if(grid[i][left] == 1) 
                        {
                            computers++;
                            break;
                        }
                    }
                    if(tmp != computers) continue;
                    for(int down=i+1; down<len; down++)
                    {
                        if(grid[down][j] == 1) 
                        {
                            computers++;
                            break;
                        }
                    }
                    if(tmp != computers) continue;
                    for(int right=j+1; right<len2; right++)
                    {
                        if(grid[i][right] == 1) 
                        {
                            computers++;
                            break;
                        }
                    }
                }
            }
        }
        return computers;
    }
};