class Solution {
public:
    void rotate(vector<vector<int>>& M) {
        
        for(int i=0;i<M.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(M[i][j],M[j][i]);    
            }
        }
        
        for(int i=0;i<M.size();i++)
        {
            reverse(M[i].begin(),M[i].end());
        }
    }
};