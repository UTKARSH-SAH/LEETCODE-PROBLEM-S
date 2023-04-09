class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> elements;
        int com= nums[0];
        int count=1;
        int findflag=0;
        if(count>nums.size()/3)
        {
            elements.push_back(com);
            findflag=1;
        }
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]==com)
            {
                count++;
                if(count>nums.size()/3)
                {
                    if(findflag==0)
                    {
                        elements.push_back(com);
                        findflag=1;
                    }
                }
            }
            else
            {
                findflag=0;
                com=nums[i];
                count=1;
                if(count>nums.size()/3)
                {
                    elements.push_back(com);
                    findflag=1;
                }
            }
        }
         return elements;
    }
};