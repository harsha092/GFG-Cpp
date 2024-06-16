class Solution{
public:
    long long int fibSum(long long int N){
        //code here
         long long mod = 1e9 + 7;
        if(N==0) return 0;
        if(N==1) return 1;
        long long sum=1;
        long long z=0;
        long long y=1;
        
        for(int i=2;i<=N;i++){
           long long x=(z+y)%mod;
            sum=(sum+x)%mod;
            z=y;
            y=x;
        }
        return sum;
    }
};
