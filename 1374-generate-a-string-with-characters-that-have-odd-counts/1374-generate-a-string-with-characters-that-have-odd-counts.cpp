class Solution {
public:
    string generateTheString(int n) {
        string result="";
        if(n%2!=0)
        {
            for(int i=0; i<n; i++)
            {
                result+='a';
            }
        }
        else
        {
            for(int i=0; i<n-1; i++)
            {
                result+='a';
            }
            result+='b';
        }
        return result;
    }
};