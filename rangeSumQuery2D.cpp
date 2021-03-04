#include "leetcode.hpp"
// 304

class NumMatrix {
public:

    vector<vector<int>> all_sums;
    NumMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        if(m == 0) return;
        int n = matrix[0].size();
        all_sums.resize(m+1, vector<int>(n+1));
        for(int i=0; i<=m; i++)
        {
            for(int j=0; j<=n; j++)
            {
                if(i==0 || j==0) all_sums[i][j] = 0;
                else all_sums[i][j] = matrix[i-1][j-1] + all_sums[i-1][j] + all_sums[i][j-1] - all_sums[i-1][j-1];
            }
        }
    }
    int sumRegion(int row1, int col1, int row2, int col2) {
        return (all_sums[row2+1][col2+1] - all_sums[row2+1][col1] - all_sums[row1][col2+1] + all_sums[row1][col1]);
    }
};