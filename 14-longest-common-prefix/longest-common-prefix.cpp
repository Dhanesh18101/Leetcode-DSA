class Node {
public:
    unordered_map<char, Node*> children;
    bool endOfWord;
    int childCount;

    Node() {
        endOfWord = false;
        childCount = 0;
    }
};

class Solution {
public:
    Node* root;

    Solution() {
        root = new Node();
    }

    void insert(string word) {
        Node* temp = root;

        for(char ch : word) {
            if(temp->children.count(ch) == 0) {
                temp->children[ch] = new Node();
                temp->childCount++;
            }
            temp = temp->children[ch];
        }
        temp->endOfWord = true;
    }

    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";

        // Build Trie
        for(string s : strs) {
            insert(s);
        }

        string ans = "";
        Node* temp = root;

        while(temp->childCount == 1 && temp->endOfWord == false) {
            // get the only child
            for(auto it : temp->children) {
                ans += it.first;
                temp = it.second;
                break;
            }
        }
        return ans;
    }
};
