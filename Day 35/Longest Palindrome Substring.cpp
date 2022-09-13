class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "";
        int n = s.length();
        
        int length = 0;
        
        int low;
        int high;
        int startindex;
        
        if(n == 1)
            return s;
        
        for(int i = 1; i < n; i++)
        {
            low = i - 1;
            high = i+1;
            while(low >= 0 && s[low] == s[high] && high < n)
            {
                if(length < high - low + 1)
                {
                    length = high - low + 1;
                    startindex = low;
                }
                low--;
                high++;
            }
            
            low = i - 1;
            high = i;
            while(low >= 0 && s[low] == s[high] && high < n)
            {
                if(length < high - low + 1)
                {
                    length = high - low + 1;
                    startindex = low;
                }
                low--;
                high++;
            }
        }
        
        if(length == 0)
        {
            ans = ans + s[0];
            return ans;
        }
        
        for(int i = startindex; i < startindex + length; i++)
        {
            ans = ans + s[i];
        }
        
        return ans;
    }
};
