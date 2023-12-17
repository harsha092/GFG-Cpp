class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        vector<int> result;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i;i<n;i++){
            if(nums[i]^nums[i+1])result.push_back(nums[i]);
            else i++;
        }
         
        return result;
    }
};
