class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int key=nums[i];
            for(int j=i+1;j<n;j++)
            {
                if(key+nums[j]==target)
                {
                    return {i,j};
                }
            }
        }
        return {-1,-1};
    }
};