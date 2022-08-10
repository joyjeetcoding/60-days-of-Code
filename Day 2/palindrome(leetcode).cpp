class Solution {
public:
    bool isPalindrome(int x) {
        int orig = x;
        int rem = 0;
        long rev = 0;
        while(x != 0)
        {
            rem = x % 10;
            rev = rev * 10 + rem;
            x = x/10;
        }
        
        if(orig != rev || orig < 0)
            return false;
        else
            return true;
    }
};