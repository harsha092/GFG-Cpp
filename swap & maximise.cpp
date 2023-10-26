

long long int maxSum(int arr[], int n)
{
    long long s=0;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        s=s+abs(arr[i]-arr[n-1-i]);
    }return s;
}
