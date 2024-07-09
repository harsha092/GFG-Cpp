class Solution {
  public:
    int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
        sort(arr.begin(),arr.end());
        int closestsum=arr[0]+arr[1]+arr[2];
        for(int i=0;i<arr.size()-2;i++){
            int j=arr.size()-1;
            int l=i+1;
            while(l<j){
                int currsum=arr[i]+arr[l]+arr[j];
                if(abs(currsum-target)<abs(closestsum-target)) closestsum=currsum;
                else if(abs(currsum-target)==abs(closestsum-target)) closestsum=max(currsum,closestsum);
                if(currsum<target) l++;
                else if(currsum>target) j--;
                else  return currsum;
            }
        }
        return closestsum;
    }
};
