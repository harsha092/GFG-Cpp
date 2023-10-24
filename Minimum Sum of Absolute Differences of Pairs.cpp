//User function Template for C++

class Solution{
public:
    long long findMinSum(vector<int> &A,vector<int> &B,int N){
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        long long m=0;
        for(int i=0;i<N;i++)
        {
            m=m+abs(A[i]-B[i]);
        }
        return m;
    }
};
