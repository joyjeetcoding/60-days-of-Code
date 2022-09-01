class Solution {
public:
    bool chk(queue<int> q, string goal,int m)
    {
        int i = 0;
        
        while(! q.empty() && i != m)
        {
            if(q.front() != goal[i])
                return false;
            q.pop();
            i++;
        }
        return true;
    }
    
    bool rotateString(string s, string goal) {
        int n = s.length();
        int m = goal.length();
        
        if(n != m)
            return false;
        
        queue<int> q;
        
        for(int i = 0; i < n; i++)
        {
            q.push(s[i]);
        }
        
        for(int i = 0; i < n; i++)
        {
            char temp = q.front();
            q.pop();
            q.push(temp);
            
            if(chk(q,goal,m))
                return true;
        }
        return false;
    }
};
