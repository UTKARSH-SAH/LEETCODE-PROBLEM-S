class Solution {
public:
    string freqAlphabets(string s) {
        string d="";
        for(int i=0; i<s.length(); i++)
        {
            string temp="";
            if((i+2)<s.length()&&s[i+2]=='#')
            {
                temp+=s[i];
                temp+=s[i+1];
                d+=96+stoi(temp);
                s.erase(s.begin()+i+2);
                i++;
            }
            else
            {
                temp+=s[i];
                d+=96+stoi(temp);
            }
        }
        return d;
    }
};