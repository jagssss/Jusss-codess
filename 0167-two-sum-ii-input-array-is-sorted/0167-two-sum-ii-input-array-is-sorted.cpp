class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> temp;
        int low=0, high=numbers.size()-1;      
        while(low<high){
            if((numbers[low]+numbers[high])==target){
                  temp.push_back(low+1);temp.push_back(high+1);
                  break;
                }
            else if((numbers[low]+numbers[high])<target) low++;
            else high--;
        }
        return temp;                
    }
};

