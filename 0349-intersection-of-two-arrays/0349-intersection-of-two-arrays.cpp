class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> ins;
        for(int i=0;i<n;i++)
        {
            int key=nums1[i];
            for(int j=0;j<m;j++)
            {
                if(key==nums2[j])
                {
                bool found=false;
                for(int x=0;x<ins.size();x++)
                    {
                    if(ins[x]==key)
                        {
                            found=true;
                            break;
                        }
                    }
                if(!found)
                    {
                        ins.push_back(key);
                    }
                    break;
                }
             
            }
        }
        return ins;
}
};