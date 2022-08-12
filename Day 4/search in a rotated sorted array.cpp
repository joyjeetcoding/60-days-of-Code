class Solution {
public:
    int getpivot(vector<int>& nums)
    {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        int mid = s + (e - s)/2;
        
        while(s < e)
        {
            if(nums[mid] >= nums[0])
                s = mid + 1;
            else
                e = mid;
            mid = s + (e - s)/2;
        }
        
        return s;
    }
    
    int bsearch(vector<int>& nums, int s, int e, int k)
    {
        int mid = s+(e-s)/2;
        
        while(s <= e)
        {
        if(nums[mid] == k)
            return mid;
        else if(nums[mid] > k)
            e = mid - 1;
        else
            s = mid + 1;
            
        mid = s+(e-s)/2;
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        int pivot = getpivot(nums);
        int n = nums.size();
        
        if(target >= nums[pivot] && target <= nums[n-1])
            return bsearch(nums, pivot, n-1, target);
        else
            return bsearch(nums, 0, pivot, target);
    }
};
