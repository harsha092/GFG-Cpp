class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
{
    sort(arr,arr+n);
        int count=1;
        for(int i=0;i<n;i++){
            if(arr[i]<=0) {continue;}
            if(arr[i]==count) count++;
            else if(arr[i]>count){ return count;}
        }
        return count;
    }
    
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        sort(arr,arr+n);
        int count=1;
        for(int i=0;i<n;i++){
        if(arr[i]<count) {continue;}
        if(arr[i]==count) count++;
        else  { return count;}
        }
        return count;
    }
};

