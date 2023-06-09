class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // the intution behind this ->  go through all the elements, along with that check if the 
		// current element has been included previously or not
		// if included skip it, else add it
    int ind = 0;
    for (auto it : nums) 
    {
        if (ind < 2 or it > nums[ind-2]) 
        {
            nums[ind++] = it;
        }
    }
    return ind; // this will contain the no of unique elements in the array
    }
};