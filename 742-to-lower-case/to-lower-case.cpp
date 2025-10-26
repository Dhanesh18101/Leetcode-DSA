class Solution {
public:
    string toLowerCase(string s) {
        string res="";
        int n=s.size();
        for(int i=0;i<n;i++) {
            char ch=s[i];
            ch=tolower(ch);
            res=res+ch;
        }
        return res;
    }
};