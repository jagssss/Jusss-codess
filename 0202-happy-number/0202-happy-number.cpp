class Solution {
public:
    
    int findsum(int x)
    {
        int funsum=0,rem=0;
        while(x>0)
        {
            rem=x%10;
            funsum = funsum + pow(rem,2);
            x = x / 10;
        }
       return funsum;
    }
    
    
    bool isHappy(int n) {
        
        if(n==1 || n==7)
        {
            return true;
        }
         n = findsum(n);
        
      while(n>=10)
      {
          n = findsum(n);  
      }
        
        if(n==1 || n==7)
        {
            return true;
        }
        else
            return false;
    }
};