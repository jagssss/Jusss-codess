//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
//User function template in C++


class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> arr1, int n, vector<int> arr2, int m) 
    {
        //Your code here
        map<int,int> m1;
        for(int i=0;i<n;i++){
            m1[arr1[i]]++;
        }
        // cout<<m1[45]<<endl;
        vector<int> ans;
        for(int j=0;j<m;j++){
            int num=arr2[j];
            while(j+1<m && num==arr2[j+1]){
                j++;
            }
            if(m1.find(num)!=m1.end()){
                int sz = m1[num];
                while(sz--){
                    ans.push_back(num);
                }
                m1.erase(num);
            }
        }
        for(auto&it:m1){
            int sz=it.second;
            while(sz--)
                ans.push_back(it.first);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(int argc, char *argv[]) 
{ 
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    
	    vector<int> a1(n);
	    vector<int> a2(m);
	    
	    for(int i = 0;i<n;i++){
	        cin >> a1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> a2[i];
	    }
	    
	    Solution ob;
	    a1 = ob.sortA1ByA2(a1, n, a2, m); 
	
	   
	    for (int i = 0; i < n; i++) 
		    cout<<a1[i]<<" ";
		
	    cout << endl;
	    
	    
	}
	return 0; 
} 

// } Driver Code Ends