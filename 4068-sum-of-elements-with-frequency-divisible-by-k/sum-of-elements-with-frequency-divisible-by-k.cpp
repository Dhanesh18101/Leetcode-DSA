class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++) {
            mp[nums[i]]++;
        }
        for (auto &i : nums) {
            if (mp[i] % k == 0) {
                sum += i;
            }
        }

        return sum;
    }
};