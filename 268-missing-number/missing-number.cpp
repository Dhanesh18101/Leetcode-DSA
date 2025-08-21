class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int> store(n+1,0);
        for(int i=0;i<n;i++) {
            store[nums[i]]=1;
        }
        for(int i=0;i<n+1;i++) {
           if(store[i]==0) {
            return i;
           }
        }
        return -1;
    }
};