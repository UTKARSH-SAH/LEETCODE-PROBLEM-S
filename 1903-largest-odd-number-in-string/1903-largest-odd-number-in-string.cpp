class Solution {
public:
    string largestOddNumber(string num) {
        int index=-1;
        for(int i=0; i<num.length(); i++)
        {
            if((num[i]-48)%2!=0)
            {
                index=i;
            }
        }
        string str="";
        for(int i=0; i<=index; i++)
        {
            str+=num[i];
        }
        return str;
    }
};