class Solution {
public:
    int vowelConsonantScore(string s) {
        int vowels = 0, consonants = 0;

        for (char c : s) {
            if (isalpha(c)) {              // count ONLY letters
                c = tolower(c);
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                    vowels++;
                else
                    consonants++;
            }
        }

        if (consonants == 0) return 0;
        return vowels / consonants;
    }
};