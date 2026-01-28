class Node {
public:
    unordered_map<char, Node*> children;
    bool endOfWord;

    Node() {
        endOfWord = false;
    }
};

class Solution {
public:
    Node* root;
    unordered_map<string, bool> dp;

    Solution() {
        root = new Node();
    }

    // insert word into trie
    void insert(string key) {
        Node* temp = root;
        for(char ch : key) {
            if(temp->children.count(ch) == 0) {
                temp->children[ch] = new Node();
            }
            temp = temp->children[ch];
        }
        temp->endOfWord = true;
    }

    // search full word in trie
    bool search(string key) {
        Node* temp = root;
        for(char ch : key) {
            if(temp->children.count(ch) == 0)
                return false;
            temp = temp->children[ch];
        }
        return temp->endOfWord;
    }

    bool helper(string key) {
        if(key.size() == 0)
            return true;

        if(dp.count(key))
            return dp[key];

        for(int i = 0; i < key.size(); i++) {
            string first = key.substr(0, i + 1);
            string second = key.substr(i + 1);

            if(search(first) && helper(second)) {
                return dp[key] = true;
            }
        }
        return dp[key] = false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        // build trie
        for(int i = 0; i < wordDict.size(); i++) {
            insert(wordDict[i]);
        }

        return helper(s);
    }
};
