//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        sort(arr,arr+n);
       vector<int> count;
       for(int i=0;i<n;i++)
        {
            if(arr[i]==arr[i+1])
            {
                count.push_back(arr[i]);
            } 
            while (i < n - 1 && arr[i] == arr[i + 1]) {
                    i++;
            }
        }  if (count.empty()) {
            count.push_back(-1); // If no duplicates found, add -1 to the result vector
        }
        return count;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
