class Solution {
public:
    int numDecodings(string s) 
    {
        short n = s.size();
        if(n == 0 || s[0] == '0')
        {
            return 0;
        }    
        vector<int> dp(n + 1, 0);
        dp[0] = dp[1] = 1;
        for(short i = 2; i <= n ; ++i)
        {
            if(s[i - 1] > '0' && s[i - 1] <= '9')
            {
                dp[i] += dp[i - 1];
            }
            if(s[i - 2] == '1' || (s[i - 2] == '2' && s[i - 1] < '7'))
            {
                dp[i] += dp[i - 2];
            }
        }
        return dp[n];
    }
};
