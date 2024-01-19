class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        if (m == 0) return ans;  // Handle empty matrix
        int n = matrix[0].size();
        int total = m * n;

        int startingrow = 0;
        int endingcol = n - 1;
        int endingrow = m - 1;
        int startingcol = 0;
        int count = 0;

        while (count < total) {
            // starting row;
            for (int i = startingcol; i <= endingcol && count < total; i++) {
                ans.push_back(matrix[startingrow][i]);
                count++;
            }
            startingrow++;

            // ending column
            for (int i = startingrow; i <= endingrow && count < total; i++) {
                ans.push_back(matrix[i][endingcol]);
                count++;
            }
            endingcol--;

            // ending row
            for (int i = endingcol; i >= startingcol && count < total; i--) {
                ans.push_back(matrix[endingrow][i]);
                count++;
            }
            endingrow--;

            // starting col
            for (int i = endingrow; i >= startingrow && count < total; i--) {
                ans.push_back(matrix[i][startingcol]);
                count++;
            }
            startingcol++;
        }

        return ans;
    }
};
