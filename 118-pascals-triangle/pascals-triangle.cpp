class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> f_res;
        for (int i = 1; i <= numRows; i++) {
            long long ans = 1;
            vector<int> res;
            res.push_back(1);
            for (int col = 1; col < i; col++) {
                ans = ans * (i - col);
                ans = ans / col;
                res.push_back(ans);
            }
            f_res.push_back(res);
        }

        return f_res;
    }
};