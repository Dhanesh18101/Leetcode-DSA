class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<int,int> vowel;
        unordered_map<int,int> consonant;
        int maxvowel=0;
        int maxconsonant=0;
        int n=s.size();
        for(int i=0;i<n;i++) {
            char ch=s[i];
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
                vowel[ch]++;
            }else {
                consonant[ch]++;
            }
        }
        for(auto &it:vowel) {
            maxvowel=max(maxvowel,it.second);
        }
        for(auto &it1:consonant) {
            maxconsonant=max(maxconsonant,it1.second);
        }
        return maxvowel+maxconsonant;
    }
};