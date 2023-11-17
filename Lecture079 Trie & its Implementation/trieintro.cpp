#include <iostream>
using namespace std;

class TrieNode {
    public:

    char data;
    TrieNode* childern[26];
    bool isTerminal;

    TrieNode (char ch) {

        this -> data = ch;

        for (int i = 0; i < 26; i++)
            childern[i] = NULL;
        
        isTerminal = false;
    }
};

class Trie {
    public:

    TrieNode* root = NULL;

    Trie () {
        root = new TrieNode('\0');
    }

    void insertUtil (TrieNode* root, string word) {
        //base case
        if (word.length() == 0){
            root -> isTerminal = true;
            return ;
        }

        //assumptions that all are char are CAPS
        int index = word[0] - 'A';

        TrieNode* child;
        
        //Present case
        if(root -> childern[index] != NULL) 
            child = root -> childern[index];
        
        //Absent case
        else 
            child = new TrieNode(word[0]);
            root -> childern[index] = child;

        //Recursion Calling
        insertUtil(child, word.substr(1));
    }
   
    void insertWord (string word) {
        insertUtil(root, word);
    }

    bool searchUtil (TrieNode* root, string word) {
        //base case
        if (word.length() == 0)
            return root -> isTerminal;

        //assumptions that all are char are CAPS
        int index = word[0] - 'A';

        TrieNode* child = NULL;
        
        //Present case
        if(root -> childern[index] != NULL) 
            child = root -> childern[index];
        
        //Absent case
        else
            return false;
        
        //Recursion Calling
        return searchUtil(child, word.substr(1));
    }

    bool searchWord (string word) {
        return searchUtil (root, word);
    }

};

int main () {

    Trie* t = new Trie();
    t->insertWord("ABC");
    t->insertWord("TIME");

    cout << "Present or not " << t->searchWord("abc") << endl;
    cout << "Present or not " << t->searchWord("TIME") << endl;
}