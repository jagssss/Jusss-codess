class Solution {
public:
    vector<vector<int>> dp;
   int func(string& s,int i,int j){
       if(i>j) return 0;
       if(dp[i][j]!=0) return dp[i][j];
       int x=i;
       
       while(x+1<=j && s[x]==s[x+1]) x++;
       int ans=1+func(s,x+1,j);
       for(int k=x+1;k<=j;k++){
           if(s[k]==s[i]){
               ans=min(ans,func(s,k,j)+func(s,x+1,k-1));
           }
       }
       
       return dp[i][j]=ans;
   }
   int strangePrinter(string s) {
       dp=vector<vector<int>>(s.size(),vector<int>(s.size(),0));
       return func(s,0,s.size()-1);
   }
};