class Solution {
    public:
        int maxCount(int m, int n, vector<vector<int>>& ops) {
            int a = 0, b = 0;
    
            vector<vector<int>> matrix(m, vector<int>(n));
    
            for (int s = 0; s < ops.size(); s++) {
                a = ops[s][0];
                b = ops[s][1];
                for (int i = 0; i < a; i++) {
                    for (int j = 0; j < b; j++) {
                        matrix[i][j] = matrix[i][j] + 1;
                    }
                }
            }
            int maxval = 0;
            for (int i = 0; i < matrix.size(); i++) {
                for (int j = 0; j < matrix[0].size(); j++) {
                    if (matrix[i][j] > maxval) {
                        maxval = matrix[i][j];
                    }
                }
            }
            cout << maxval;
            int count = 0;
            for (int i = 0; i < matrix.size(); i++) {
                for (int j = 0; j < matrix[0].size(); j++) {
                    if (matrix[i][j] == maxval) {
                        count++;
                    }
                }
            }
    
            return count;
        }
    };