struct Node{
    public:
    unordered_map<char,Node*>links;
    bool flag=false;
     
};
class Trie {
public:
    Node *head=new Node;
    Trie() {
        
    }
    
    void insert(string word) {
        Node*temp=head;
        for(int i=0;i<word.length();i++){
            if(temp->links.find(word[i])==temp->links.end()){
                Node*next=new Node;
                temp->links[word[i]]=next;
            }
            temp=temp->links[word[i]];
        }
        temp->flag=true;
    }
    
    bool search(string word) {
        Node*temp=head;
        for(int i=0;i<word.length();i++){
            if(temp->links.find(word[i])==temp->links.end())return false;
            temp=temp->links[word[i]];
        }
        return temp->flag;
    }
    
    bool startsWith(string word) {
        Node*temp=head;
        for(int i=0;i<word.length();i++){
            if(temp->links.find(word[i])==temp->links.end())return false;
            temp=temp->links[word[i]];
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