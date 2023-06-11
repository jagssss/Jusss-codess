class Solution {
public:
    int trap(vector<int>& height) {
        int size=height.size();
        
        vector<int> maxLeft(size);
        maxLeft[0]=height[0];
        for(int i=1;i<size;i++)
            maxLeft[i]=max(maxLeft[i-1],height[i]);
        
        vector<int> maxRight(size);
        maxRight[size-1]=height[size-1];
        for(int i=size-2;i>=0;i--) 
            maxRight[i]=max(maxRight[i+1],height[i]);
        //reverse(maxRight.begin(),maxRight.end()); ------> No need to reverse
        
        vector<int> water(size);
        for(int i=0;i<size;i++)
            water[i] = min(maxLeft[i],maxRight[i]) - height[i];
        
        int sum=0;
        for(int i=0;i<size;i++)
            sum = sum + water[i];
        
        return sum;
    }
};