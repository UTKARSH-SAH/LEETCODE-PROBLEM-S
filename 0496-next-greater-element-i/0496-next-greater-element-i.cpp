class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int found, max;
        for(int i=0; i<nums1.size(); i++)
        {
            found=0;
            max=-1;
            for(int j=0; j<nums2.size(); j++)
            {
                if(nums1[i]==nums2[j])
                {
                    found=1;
                }
                if(found==1&&nums2[j]>nums1[i])
                {
                    max=nums2[j];
                    break;
                }
            }
            result.push_back(max);
        }
        return result;
    }
};