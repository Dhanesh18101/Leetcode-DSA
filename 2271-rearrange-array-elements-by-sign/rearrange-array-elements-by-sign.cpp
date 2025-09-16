class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos,neg,result;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]>0) {
                pos.push_back(nums[i]);
            }else {
                neg.push_back(nums[i]);
            }
        }
        int n=nums.size()/2;
        result.reserve(nums.size());
        for(int i=0;i<n;i++) {
            result.push_back(pos[i]);
            result.push_back(neg[i]);
        }
        return result;
    }
};