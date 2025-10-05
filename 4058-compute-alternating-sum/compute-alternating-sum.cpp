class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int n=nums.size();
        int evensum=0;
        int oddsum=0;
        for(int i=0;i<n;i=i+2) {
            evensum+=nums[i];
        }
        for(int j=1;j<n;j=j+2) {
            oddsum+=nums[j];
        }
        return (evensum-oddsum);
    }
};