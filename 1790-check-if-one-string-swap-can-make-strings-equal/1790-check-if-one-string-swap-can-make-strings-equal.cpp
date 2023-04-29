class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int pos=-1;
        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i]!=s2[i])
            {
                if(pos==-1)
                {
                    pos=i;
                }
                else
                {
                    swap(s1[pos], s1[i]);
                    break;
                }
            }
        }
        return s1==s2;
    }
};