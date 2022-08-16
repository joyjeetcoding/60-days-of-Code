class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        int rowIndex = 0;
        int colIndex = n - 1;
        
        while(rowIndex < m && colIndex >= 0)
        {
            int element = matrix[rowIndex][colIndex];
            
            if(element == target)
                return true;
            else if(element < target)
                rowIndex++;
            else
                colIndex--;
        }
        
        return false;
        
        
    }
};
