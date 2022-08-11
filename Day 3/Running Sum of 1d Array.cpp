class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int j = 0;
        
        while(j < n)
        {
            if(j == 0)
            {
                ans.push_back(nums[j]);
                j++;
            }
            else
            {
                nums[j] = nums[j] + nums[j-1];
                ans.push_back(nums[j]);
                j++;
            }
        }
        return ans;
    }
};
