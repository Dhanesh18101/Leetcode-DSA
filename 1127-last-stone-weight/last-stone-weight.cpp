class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size()==1) {
            return stones[0];
        }
        priority_queue<int> pq(stones.begin(),stones.end());
        while(pq.size()>1) {
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            pq.push(abs(a-b));
        }
        return pq.top();
    }
};