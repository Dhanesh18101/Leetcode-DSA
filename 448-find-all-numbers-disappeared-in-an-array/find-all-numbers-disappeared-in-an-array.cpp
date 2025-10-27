class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        unordered_set<int> present(nums.begin(),nums.end());
        for(int i=1;i<=n;i++) {
            if(present.find(i)==present.end()) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};