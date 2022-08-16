vector<int> spiralPathMatrix(vector<vector<int>> matrix, int n, int m) 
{
    vector<int> ans;
    
    int scol = 0;
    int srow = 0;
    
    int erow = n - 1;
    int ecol = m - 1;
    
    int total = n * m;
    int count = 0;
    
    while(count < total)
    {
        for(int index = scol; count < total && index <= ecol; index++)
        {
            ans.push_back(matrix[srow][index]);
            count++;
        }
        srow++;
        
        for(int index = srow; count < total && index <= erow; index++)
        {
            ans.push_back(matrix[index][ecol]);
            count++;
        }
        ecol--;
        
        for(int index = ecol; count < total && index >= scol; index--)
        {
            ans.push_back(matrix[erow][index]);
            count++;
        }
        erow--;
        
        for(int index = erow; count < total && index >= srow; index--)
        {
            ans.push_back(matrix[index][scol]);
            count++;
        }
        scol++;
    }
    return ans;
}
