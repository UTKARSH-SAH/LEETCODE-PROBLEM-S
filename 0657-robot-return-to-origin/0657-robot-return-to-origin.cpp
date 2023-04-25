class Solution {
public:
    bool judgeCircle(string moves)
    {
        int count=0;
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='U') 
                count++;
            if(moves[i]=='D') 
                count--;
        }
        if(count!=0) 
            return false;
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='R') 
                count++;
            if(moves[i]=='L')
                count--;
        }
        if(count!=0) 
            return false;
        return true;
    }
};