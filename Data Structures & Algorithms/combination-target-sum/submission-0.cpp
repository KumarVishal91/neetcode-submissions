class Solution {
public:
    set<vector<int>> ans;
    void solve(vector<int>&arr,int idx, int target, vector<int> &comb){
        if(target<0) return;
        if(target==0){
            ans.insert(comb);
            return;

        }
        if(idx==arr.size()) return;
        comb.push_back(arr[idx]);
        solve(arr,idx,target-arr[idx],comb);
        comb.pop_back();
        solve(arr,idx+1,target,comb);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> comb;
        solve(nums,0,target,comb);
        vector<vector<int>> result(ans.begin(), ans.end());
        return result;
    }
};
