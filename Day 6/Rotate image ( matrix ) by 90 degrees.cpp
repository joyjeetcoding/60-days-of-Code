class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int nrows = matrix.size();
        int ncols = matrix[0].size();
        
        //Transpose the matrix
        
        for(int i = 0; i < nrows; i++)
        {
            for(int j = 0; j < i; j++)
            {
                if(i != j)
                {
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
        }
        
        //Reverse the rows
        for(int i = 0; i < nrows; i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
