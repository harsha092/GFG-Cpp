//User function Template for C++

class Solution{
  public:
  int smallestSumSubarray(vector<int>& a){
      int sum=a[0];
      int ans=a[0];
      for(int i=1;i<a.size();i++)
      {
          sum=min(sum+a[i],a[i]);
          ans=min(sum,ans);
      }
      return ans;
    }
 
};
