class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0;
        int e = arr.size()-1;
        int mid = s + (e-s)/2;
        
        while(s < e)
        {
            if(arr[mid+1] <= arr[mid])
                e = mid;
            else
                s = mid + 1;
            mid = s + (e-s)/2;
        }
        return e;
    }
};
