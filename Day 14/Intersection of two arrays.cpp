class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n = nums1.size();
        int m = nums2.size();
        for(int i = 0; i < n; i++)
        {
            int element = nums1[i];
            for(int j = 0; j < m; j++)
            {
                
                if(element == nums2[j])
                {
                    ans.push_back(element);
                }
            }
        }
        sort(ans.begin(),ans.end());
        ans.erase(std::unique(ans.begin(),ans.end()),ans.end());
        return ans;
    }
};
