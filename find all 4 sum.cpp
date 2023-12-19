//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        int n=arr.size();
        vector<vector<int>> sol;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(i>0 && arr[i]==arr[i-1])
            continue; 
            for(int j=i+1;j<n;j++){
                if(j>i+1 && arr[j]==arr[j-1])
                continue;
                int first=j+1;
                int last=n-1;
                while(first<last){
                    int sum=0;
                    sum=sum+arr[i]+arr[j]+arr[first]+arr[last];
                    if(sum==k){
                        vector<int> temp={arr[i],arr[j],arr[first],arr[last]};
                        sol.push_back(temp);
                        first++,last--;
                        while(first<last && arr[first]==arr[first-1]) 
                        first++;
                        while(first<last && arr[last]==arr[last+1])
                        last--;
                    }
                    else if(sum<k)
                    first++;
                    else
                    last--;
                }
                
            }
        }
        return sol;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
