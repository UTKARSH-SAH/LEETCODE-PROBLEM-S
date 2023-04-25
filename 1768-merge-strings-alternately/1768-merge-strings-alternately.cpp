class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int i=0,j=0;  
        string s="";  
        while(i < w1.length() || j < w2.length())
        { 
            if(i<w1.length())  
                s += w1[i++];  
            if(j<w2.length())   
                s += w2[j++];  
        } 
        return s;    
    }
};