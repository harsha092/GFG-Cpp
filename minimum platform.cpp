class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr, arr+n);
    	sort(dep, dep+n);
    	
    	int i=0, j=1;
    	int platform = 1;
    	
    	while(i<n && j<n){
    	    if( arr[j] > dep[i]){
    	        i++;}
    	    else{
    	        platform++;}
    	       
    	    j++;
    	}
    	return platform;
    }
};
