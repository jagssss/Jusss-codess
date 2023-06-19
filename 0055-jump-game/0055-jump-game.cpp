class Solution {
public:
    bool canJump(vector<int>& nums) {
        int idx = 0;
       
        for (int maximum = 0; idx < nums.size() && idx <= maximum; ++idx)
            maximum = max(idx + nums[idx], maximum);       
        
        return idx == nums.size();
    }
};