class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        int n = s.length();
        int i = 0;
        
        while(i < n)
        {
            while(i < n && s[i] == ' ')
                i++;
            
            int j = i + 1;
            while(j < n && s[j] != ' ')
                j++;
            
            string sub = s.substr(i, j-i);
            
            if(i >= n)
                break;
            
            if(result.length() == 0)
                result = sub;
            else
                result = sub + " " + result;
            i = j + 1;
        }
        
        return result;
    }
};
