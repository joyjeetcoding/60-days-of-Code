class Solution {
public:
    int subtractProductAndSum(int n) {
        int result;
        int prod = 1;
        int sum = 0;
        
        while(n != 0)
        {
            int a = n % 10;
            int b = n % 10;
            prod = prod * a;
            sum = sum + b;
            n = n / 10;
        }
        
        result = prod - sum;
        return result;
    }
};
