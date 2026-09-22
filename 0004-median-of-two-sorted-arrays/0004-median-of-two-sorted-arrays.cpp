class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        int l=n+m;
        vector<int> nums3(n+m);
        for(int i=0;i<n;i++)
        {
            nums3[i]=nums1[i];
        }
        for(int i=0;i<m;i++)
        {
            nums3[i+n]=nums2[i];
        }
        sort(nums3.begin(),nums3.end());
        double midn;
        int mid=l/2;
        if(l%2==0)
        {
            midn=(nums3[mid]+nums3[mid-1])/2.0;
        }
        else
        {
            midn=nums3[mid];
        }
        return midn;
    }
};