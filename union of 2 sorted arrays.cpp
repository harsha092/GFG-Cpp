class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int> ans;
        int i=0,j=0;
        while(i<n && j<m){
            if(arr1[i]<arr2[j]) {
                ans.push_back(arr1[i++]);//adds arr1[i] to vector ans,,i++ to check duplicate
            }
            else if(arr1[i]>arr2[j]){
                ans.push_back(arr2[j++]);//adds arr2[j] to vector ans,,j++ to check duplicate
            }
            else{
                ans.push_back(arr1[i]);//arr1[i]==arr2[j]..to vector ans
                i++;
                j++;
            }
            while(i>0 && i<n && arr1[i]==arr1[i-1]) i++;//skips duplicate
            while(j>0 &&j<m && arr2[j]==arr2[j-1]) j++;//skips duplicate
        }
        while(i<n){
            ans.push_back(arr1[i++]);//i++ to check duplicate
            while(i>0 && i<n && arr1[i]==arr1[i-1]) i++;//skips duplicate while adding
        }
        while(j<m){
            ans.push_back(arr2[j++]);//j++ to check duplicate
            while(j>0 &&j<m && arr2[j]==arr2[j-1]) j++;//skips duplicated while adding
        }
        
        return ans;
    }
};
