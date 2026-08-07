class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int x:nums){
            mp[x]++;
        }
        vector<int> ans;
        while(k--){
            int freq=0;
            int elem=0;
            for(auto it:mp){
                if(it.second>freq){
                    freq=it.second;
                    elem=it.first;
                }
            }
            ans.push_back(elem);
            mp.erase(elem);
        }
        return ans;
    }
};
