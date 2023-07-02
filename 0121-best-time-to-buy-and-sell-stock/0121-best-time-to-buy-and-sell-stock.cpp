class Solution {
public:
    int maxProfit(vector<int>& prices) {
     
        int pro=0;
        int minpri= INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            minpri = min(minpri, prices[i]);
            pro = max(pro, prices[i] - minpri);
        }
          return pro;
    }
};