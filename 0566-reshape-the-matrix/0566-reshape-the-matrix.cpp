class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(mat[0].size()*mat.size()!=r*c)
        {
            return mat;
        }
        vector<vector<int>> result(r, vector<int>(c));
        int row=0, col=0;
        for(int i=0; i<mat.size(); i++)
        {
            for(int j=0; j<mat[i].size(); j++)
            {
                result[row][col]=mat[i][j];
                col++;
                if(col==c)
                {
                    col=0;
                    row++;
                }
            }
        }
        return result;
    }
};