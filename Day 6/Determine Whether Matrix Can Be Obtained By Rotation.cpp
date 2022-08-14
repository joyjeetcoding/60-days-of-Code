class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int nrows = mat.size();
        int ncols = mat[0]. size();
        
        for(int rotate = 0; rotate < 4; rotate++)
        {
            
        //transpose
        for(int i = 0; i < nrows; i++)
        {
            for(int j = 0; j < i; j++)
            {
                if(i != j)
                    swap(mat[i][j],mat[j][i]);
            }
        }
        
        
        //reverse cols
        for(int i = 0; i < nrows; i++)
            reverse(mat[i].begin(),mat[i].end());
        
        if(mat == target)
            return true;
        }
        return false;
    }
};
