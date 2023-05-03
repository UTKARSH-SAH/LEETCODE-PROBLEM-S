class Solution {
public:
    string interpret(string command) {
        string result;
        for(int i=0; i<command.length(); i++)
        {
            if(command[i]=='G')
            {
                result+='G';
            }
            if(command[i]=='('&&command[i+1]==')')
            {
                result+='o';
                i++;
            }
            if(command[i]=='('&&command[i+1]!=')')
            {
                result+="al";
                i+=3;
            }
        }
        return result;
    }
};