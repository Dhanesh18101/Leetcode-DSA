class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        unordered_set<int> s;
        int n=arr.size();
        for(int i=0;i<n;i++) {
            mp[arr[i]]++;
        }
        for(auto &it:mp) {
            if(s.find(it.second)!=s.end()) {
                return false;
            }
            s.insert(it.second);
        }
        return true;
    }
};