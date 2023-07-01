class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       vector<int>ans;
       int i=0;
        while(i<nums.size())
        {
            if(nums[i]!=val){
                
               //swap(nums[i],nums[l-1]);
                ans.push_back(nums[i]);
                //l--;
            }
            i++;
        }
       nums.clear();
        for(auto i:ans){
            nums.push_back(i);
        }
      return ans.size();  
    }
};