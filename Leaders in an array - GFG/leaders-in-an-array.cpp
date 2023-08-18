//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    // Function to find the leaders in the array.
public:
    vector<int> leaders(int a[], int n){
        // Create a vector to store the leaders.
        vector<int> result;
        
        // Initialize a variable to store the maximum element found so far.
        int maxRight = INT_MIN;
        
        // Traverse the array from right to left using a loop.
        for (int i = n - 1; i >= 0; i--) {
            // If the current element is greater than or equal to maxRight,
            // add it to the result vector and update maxRight.
            if (a[i] >= maxRight) {
                result.push_back(a[i]);
                maxRight = a[i];
            }
        }
        
        // Reverse the result vector to maintain the original order of leaders.
        reverse(result.begin(), result.end());
        
        // Return the vector containing the leaders.
        return result;
    }
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends