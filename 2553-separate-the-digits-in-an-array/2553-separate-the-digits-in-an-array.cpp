class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> digits;
        int count=0;
        for(int i=0; i<nums.size(); i++)
        {
            int nummi=count;
            while(nums[i]!=0)
            {
                digits.insert(digits.begin()+nummi, nums[i]%10);
                count++;
                nums[i]/=10;
            }
        }
        return digits;
    }
};