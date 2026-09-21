class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0,right=n-1;
        int first=-1,last=-1;
        while(right>=left){
            int mid=(left+right)/2;
            if(nums[mid]==target)
            {
                first=mid;
                right=mid-1;
            }
            else if(nums[mid]<target)
            {
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }
        }
        left=0;
        right=n-1;
        while(right>=left){
            int mid=(left+right)/2;
            if(nums[mid]==target)
            {
                last=mid;
                left=mid+1;
            }
            else if(nums[mid]<target)
            {
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }
        }
        return {first,last};
    }
};