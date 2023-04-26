class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count=0;
        char comp;
        for(int i=0; i<strs[0].size(); i++)
        {
            comp='a';
            for(int j=0; j<strs.size(); j++)
            {
                if(strs[j][i]>=comp)
                {
                    comp=strs[j][i];
                    continue;
                }
                else
                {
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};