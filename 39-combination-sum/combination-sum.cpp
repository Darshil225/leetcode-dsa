class Solution {
public:

    void solve(int i, vector<int>& candidates, int target, 
               vector<int>& temp, vector<vector<int>>& ans) {
        
        // base case
        if(i == candidates.size()) {
            if(target == 0) {
                ans.push_back(temp);
            }
            return;
        }

        // take the element
        if(candidates[i] <= target) {
            temp.push_back(candidates[i]);                  // add
            solve(i, candidates, target - candidates[i], temp, ans); // same index
            temp.pop_back();                                // backtrack
        }

        // not take the element
        solve(i + 1, candidates, target, temp, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> ans;
        vector<int> temp;

        solve(0, candidates, target, temp, ans);

        return ans;
    }
};