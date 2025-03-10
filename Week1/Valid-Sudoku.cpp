#include <stdio.h>
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<int>>row(9);
        vector<set<int>>col(9);
        int box [3][3][10]={0};

        for(int i=0;i<9;i++) {
            for(int j=0;j<9;j++) {
                if(board[i][j] == '.') {
                    continue;
                }

                int x = board[i][j] - '0';

                if(row[i].count(x) || col[j].count(x) || box[i/3][j/3][x]!=0) {
                    return false;
                }

                row[i].insert(x);
                col[j].insert(x);
                box[i/3][j/3][x] = x;
            }
        }

        return true;
    }
};
