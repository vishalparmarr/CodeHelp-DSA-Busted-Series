# Coding Quesion

1. Implement Trie: [https://www.codingninjas.com/studio/problems/implement-trie_631356?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar]

``` cpp
1. class TrieNode {
    public:

    char data;
    TrieNode* childern[26];
    bool isTerminal;

    TrieNode (char ch) {

        data = ch;

        for (int i = 0; i < 26; i++)
            childern[i] = NULL;
        
        isTerminal = false;
    }
};

class Trie {
    TrieNode* root = NULL;
public:
    Trie() {
        root = new TrieNode('\0');
    }

    void insertUtil (TrieNode* root, string word) {
        
        if (word.length() == 0){
            root -> isTerminal = true;
            return ;
        }

        int index = word[0] - 'a';
        TrieNode* child;
        
        if(root -> childern[index] != NULL) 
            child = root -> childern[index];

        else 
            child = new TrieNode(word[0]);
            root -> childern[index] = child;

        insertUtil(child, word.substr(1));
    }

    void insert(string word) {
        insertUtil(root, word);
    }

    bool searchUtil (TrieNode* root, string word) {
        
        if (word.length() == 0)
            return root -> isTerminal;

        int index = word[0] - 'a';
        TrieNode* child = NULL;
        
        if(root -> childern[index] != NULL) 
            child = root -> childern[index];
        
        else
            return false;
        
        return searchUtil(child, word.substr(1));
    }

    bool search(string word) {
        return searchUtil (root, word);
    }

     bool prefixUtil (TrieNode* root, string word) {
        //base case
        if (word.length() == 0)
            return true;

        int index = word[0] - 'a';
        TrieNode* child = NULL;
        
        if(root -> childern[index] != NULL) 
            child = root -> childern[index];
        
        else
            return false;
    
        return prefixUtil(child, word.substr(1));
    }
    
    bool startsWith(string prefix) {
        return prefixUtil(root, prefix);
    }
};
```
