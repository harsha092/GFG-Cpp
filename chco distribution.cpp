class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
   sort(a.begin(),a.end());
     long long dif =INT_MAX;
    int i = 0, j = m-1;
 while(j < n){
        dif = min(a[j]-a[i], dif);
        i++;
        j++;
    }
    return dif;
    }   
};
