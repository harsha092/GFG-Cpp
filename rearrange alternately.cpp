// Your code here
    	int k=1;
    	vector<long long> v(arr,arr+n);
    	for(int i=0;i<n;i=i+2)
    	{
    	    arr[i]=v[n-k];
    	    arr[i+1]=v[k-1];
    	    k++;
    	}
