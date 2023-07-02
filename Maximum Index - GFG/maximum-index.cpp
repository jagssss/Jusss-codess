//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
   int maxIndexDiff(int arr[], int n) {
        // code here
        vector<int> a(n),b(n);
        int l=INT_MAX,r=INT_MIN;
        for(int i=0;i<n;i++){
            l=min(l,arr[i]);
            a[i]=l;
        }
        for(int i=n-1;i>=0;i--){
            r=max(r,arr[i]);
            b[i]=r;
        }
        int p=0,q=0,ans=0;
        while(p<n && q<n){
            if(a[p]<=b[q]){
                ans=max(ans,q-p);
                q++;
            }else p++;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends