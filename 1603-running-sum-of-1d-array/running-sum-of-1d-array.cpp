class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=1;
        while(j<n) {
            nums[j]=nums[i]+nums[j];
            i++;
            j++;
        }
        return nums;
    }
};