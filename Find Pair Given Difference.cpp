bool findPair(int arr[], int size, int n){
    //code
   int s=0;
    sort(arr,arr+size);
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++){
        s=abs(arr[i]-arr[j]);
        if(s==n)
        {
            return true;
        }
        
    }}return false;
}
   
