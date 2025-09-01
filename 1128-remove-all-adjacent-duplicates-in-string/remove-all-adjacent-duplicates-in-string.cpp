class Solution {
public:
    string removeDuplicates(string s) {
        string ans="";
        int n=s.length();
        stack<char> st;
        for(int i=0;i<n;i++) {
            if(st.empty() || st.top()!=s[i]) {
                st.push(s[i]);
            }else {
                st.pop();
            }
        }
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};