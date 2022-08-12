class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        
        for(int i = 0; i < n; i++)
        {
            sum = sum + nums[i];
        }
        
        int lsum = 0;
        int rsum = sum;
        
        for(int i = 0; i < n; i++)
        {
            rsum = rsum - nums[i];
            
            if(lsum == rsum)
                return i;
            
            lsum = lsum + nums[i];
        }
        
        return -1;
    }
};
