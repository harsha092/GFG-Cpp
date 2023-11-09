class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    vector<pair<int,int>> v;
	    int swapp=0;
	    for(int i=0;i<nums.size();i++){
	        v.push_back({nums[i],i});
	    }
	    
	    sort(v.begin(),v.end());
	    for(int i=0;i<v.size();i++){
	        while(v[i].second!=i){
	            swap(v[i],v[v[i].second]); swapp++;
	        }
	    }
	 return swapp; }
};
