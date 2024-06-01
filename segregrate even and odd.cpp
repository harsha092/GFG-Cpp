	void segregateEvenOdd(int arr[], int n) {
	    // code here
	    vector<int> even, odd;
	    
	    for(int i=0;i<n;i++){
	        if(arr[i]%2==0){
	            even.push_back(arr[i]);
	        }
	        if(arr[i]%2!=0)
	        {
	            odd.push_back(arr[i]);
	        }
	    }
	    sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
         int index = 0;
        for (int num : even) {
            arr[index++] = num;
        }
        for (int num : odd) {
            arr[index++] = num;
        }
	}
