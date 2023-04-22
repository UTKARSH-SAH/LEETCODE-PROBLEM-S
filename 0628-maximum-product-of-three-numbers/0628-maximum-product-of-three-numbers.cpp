class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int nums1 = nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        int nums2 = nums[0]*nums[1]*nums[nums.size()-1];
        return(nums1>=nums2?nums1:nums2);
    }
};