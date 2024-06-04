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
