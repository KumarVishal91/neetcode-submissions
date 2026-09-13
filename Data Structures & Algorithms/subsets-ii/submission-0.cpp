
class Solution {
public:

    void solve(vector<int>& nums,
               int index,
               vector<int>& output,
               vector<vector<int>>& ans) {

        // Every current output is a valid subset
        ans.push_back(output);

        // Try choosing every element from index onward
        for(int i = index; i < nums.size(); i++) {

            // Skip duplicate elements at the SAME level
            if(i > index && nums[i] == nums[i - 1]) {
                continue;
            }

            // Choose nums[i]
            output.push_back(nums[i]);

            // Move to the next index
            solve(nums, i + 1, output, ans);

            // Backtrack
            output.pop_back();
        }
    }


    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        // Step 1: Sort so duplicates become adjacent
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        vector<int> output;

        // Step 2: Start recursion
        solve(nums, 0, output, ans);

        return ans;
    }
};