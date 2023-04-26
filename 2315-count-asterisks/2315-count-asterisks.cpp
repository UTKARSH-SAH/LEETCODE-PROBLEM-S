class Solution {
public:
    int countAsterisks(string s) {
        int linecount=0;
        int count=0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='|')
            {
                linecount++;
                continue;
            }
            if(linecount%2==0)
            {
                if(s[i]=='*')
                {
                    count++;
                }
            }
        }
        return count;
    }
};