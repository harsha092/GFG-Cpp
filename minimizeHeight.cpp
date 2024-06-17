class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
         sort(arr,arr+n);
           int x=arr[n-1]-arr[0];
           for(int i=1;i<n;i++){
               if(arr[i]-k<0){ continue; }
           int minn = min(arr[0]+k, arr[i]-k);
           int maxx = max(arr[n-1]-k, arr[i-1]+k);
           x = min(x,maxx-minn);
           }
    
     return x;
    }
};
