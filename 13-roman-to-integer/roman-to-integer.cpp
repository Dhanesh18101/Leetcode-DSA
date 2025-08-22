class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        int n=s.size();
        int ans=0;
        for (int i = 0; i < n; i++) {
            if (i + 1 < n && m[s[i]] < m[s[i + 1]]) {
                ans -= m[s[i]];  // subtract when smaller before larger
            } else {
                ans += m[s[i]];  // otherwise add
            }
        }
        return ans;
    }
};