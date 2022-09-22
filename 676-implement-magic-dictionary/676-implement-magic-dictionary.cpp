class Node{
    public:
    map<char,Node*>links;
    bool flag=false;
     
};
class MagicDictionary {
public:
    Node*head=new Node;
    MagicDictionary() {
        
    }
    
    void buildDict(vector<string>nums) {
        for(auto it:nums){
        Node*temp=head;
            for(int i=0;i<it.size();i++){
                if(temp->links.find(it[i])==temp->links.end()){
                    Node*next=new Node;
                    temp->links[it[i]]=next;
                }
                temp=temp->links[it[i]];
            }
        temp->flag=true;
        }
    }
    bool helper(Node*head1,int j,string word){
        Node*temp=head1;
        for(int i=j;i<word.size();i++){
            if(temp->links.find(word[i])==temp->links.end())return false;
            temp=temp->links[word[i]];
        }
        return temp->flag;
    }
    bool search(string word) {
        Node*temp=head;
        //int count=0;
        for(int i=0;i<word.size();i++){
            bool ans=false;
          //  cout<<word[i]<<endl;
            for(char x='a';x<='z';x++){
                if(x==word[i])continue;
               // cout<<x;
                if(temp->links.find(x)==temp->links.end())continue;
                ans|=helper(temp->links[x],i+1,word);
                if(ans==true)return true;
            }
            //cout<<endl;
            if(temp->links.find(word[i])==temp->links.end())return false;
            temp=temp->links[word[i]];
        }
        return false;
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */