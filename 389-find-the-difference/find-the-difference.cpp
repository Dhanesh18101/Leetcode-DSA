class Solution {
public:
    char findTheDifference(string s, string t) {
        string res=s+t;
        int diff=0;
        for(int i=0;i<res.size();i++) {
            diff^=res[i];
        }
        return diff;
    }
};