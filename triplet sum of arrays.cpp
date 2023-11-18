class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        int s=0;
        sort(A,A+n);
        for (int i = 0; i < n - 2; i++) {
            int j = i + 1;
            int k = n - 1;
            while (j < k) {
                int Sum = A[i] + A[j] + A[k];
                if (Sum == X) {
                    return true;
                } else if (Sum < X) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        return false;
    }
};
