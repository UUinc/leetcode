class Solution {
public:
    bool isNotValid(vector<char> data) {
        for(int i=0; i<data.size(); i++)
        {
            if(data[i] == '.')
                data.erase(data.begin()+i--);
        }

        if(data.size() == 0)
            return false;

        sort(data.begin(), data.end());

        for(int i=0; i<data.size()-1; i++)
        {
            if(data[i] == data[i+1])
               return true;
        }
        
        return false;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        //rows
        for(int i=0; i<9; i++)
        {
            if(isNotValid(board[i]))
                return false;
        }

        //cols
        for(int i=0; i<9; i++)
        {
            vector<char> cols;
            for(int j=0; j<9; j++)
                cols.push_back(board[j][i]);
            
            if(isNotValid(cols))
                return false;
        }

        //square
        for(int i=0; i<9; i++)
        {
            vector<char> square;
            for(int j=0+3*(i/3); j<3+3*(i/3); j++)
                for(int k=3*(i%3) ; k<3+3*(i%3); k++)
                    square.push_back(board[j][k]);
            
            if(isNotValid(square))
                return false;
        }

        return true;
    }
};