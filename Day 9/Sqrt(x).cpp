class Solution {
public:
    int mySqrt(int x) {
        long long int s = 0;
        long long int e = x;
        long long int mid = (s + e)/2;
        
        while(s <= e)
        {
            if((mid * mid) == x)
                return mid;
            else if((mid * mid) < x)
                s= mid + 1;
            else
                e = mid - 1;
            mid = (s + e)/2;
        }
        return mid;
    }
};
