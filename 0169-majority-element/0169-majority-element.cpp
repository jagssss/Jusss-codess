class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        //Moore's voting algo
        
        int count = 0;
        int el = 0;
        
        for(auto it : nums)
        {
            if(count == 0)
            {
                el = it;
            }
            
            if(it == el)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        
        return el;
    }
};