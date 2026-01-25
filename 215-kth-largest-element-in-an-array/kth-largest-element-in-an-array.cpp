class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(),nums.end());
        int count=0;
        int ans=0;
        while(!pq.empty() && count<k) {
            ans=pq.top();
            pq.pop();
            count++;
        }
        return ans;
    }
};