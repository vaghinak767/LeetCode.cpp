class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        short n = nums.size();
        int goal = n - 1;
        for(int i = n - 1; i >= 0; --i)
        {
            if(i + nums[i] >= goal)
            {
                goal = i;
            }
        }
        return goal == 0;
    }
};
