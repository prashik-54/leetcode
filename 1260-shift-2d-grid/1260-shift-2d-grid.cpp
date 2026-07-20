class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int row = grid.size();
        int col = grid[0].size();
        for(int i=1;i<=k;i++){
            for(int r=0;r<row;r++){
                for(int c=0; c<col; c++){
                    swap(grid[0][0],grid[r][c]);
                }
            }
        }
        return grid;
    }
};