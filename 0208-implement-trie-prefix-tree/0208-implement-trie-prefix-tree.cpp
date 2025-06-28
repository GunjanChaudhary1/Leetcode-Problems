class TrieNode{
public:
    bool end = false;
    TrieNode* children[26];

    TrieNode(){
        for(int i=0; i<26; ++i){
            children[i] = nullptr;
        }
    }
};

class Trie {
public:
    TrieNode* root;
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {

        TrieNode* currentNode = root;
        for(char c:word){
            int index = c-'a';
            if(currentNode->children[index] == nullptr){
                currentNode->children[index] = new TrieNode();
            }
            currentNode = currentNode->children[index];
        }
        currentNode->end = true;
    }
    
    bool search(string word) {
        TrieNode* current = root;

        for(char c:word){
            int index = c-'a';
            if(current->children[index]==nullptr) return false;
            current = current->children[index];
        }
        return current->end;
    }
    
    bool startsWith(string prefix) {
        TrieNode* current = root;

        for(char c:prefix){
            int index = c-'a';
            if(current->children[index]==nullptr) return false;
            current = current->children[index];
        }
        return true;
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */