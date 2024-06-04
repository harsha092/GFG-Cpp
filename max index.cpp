class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // code here
          if (n < 2) return 0;
        int i=0,j=i,ans=0;
        while(j<n){
            if(arr[i]<=arr[j]){
                ans=max(ans,j-i);
            }
            j++;
            if(j==n){
                i++;
                j=i;
            }
        }
        return ans;
    }

};



class Solution {
public:
    int maxIndexDiff(int arr[], int n) {
        // Step 1: Precompute maximum values up to each index
        std::vector<int> pref_max(n);
        pref_max[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            pref_max[i] = std::max(pref_max[i + 1], arr[i]);
        }

        // Step 2: Traverse from the start to find the maximum index difference
        int ans = 0, j = 0;
        for (int i = 0; i < n; i++) {
            while (j < n && pref_max[j] < arr[i]) {
                j++;
            }
            if (j < n) {
                ans = std::max(ans, j - i);
            }
        }

        return ans;
    }
};

