class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int j = 0;
        
        int n = nums.size();
        
        while(i < n)
        {
            if(nums[i] != val)
            {
                nums[j] = nums[i];
                j++;
            }
            i++;
        }
        
        return j;
    }
};
