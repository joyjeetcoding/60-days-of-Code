class Solution {
public:
    bool isPowerOfTwo(int n) {
        /* recursion */
        
        //base case
        if(n == 1)
            return true;
        
        
        if(n < 1 || n % 2 != 0)
            return false;
        
        else
            return isPowerOfTwo(n/2);
    }
};
