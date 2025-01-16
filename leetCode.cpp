class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int ans=0;
        for(auto i:nums1)
        {
            if(n2%2!=0)
            {
                ans^=i;
            }
        }
         for(auto i:nums2)
        {
            if(n1%2!=0)
            {
                ans^=i;
            }
        }
        return ans;
    }
};