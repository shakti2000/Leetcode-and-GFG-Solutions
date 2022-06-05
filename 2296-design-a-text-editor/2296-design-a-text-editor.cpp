class node{
    public:
    char data;
    node*next;
    node*prev;
    node(char x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};
class TextEditor {
public:
    
    node*head;
    node*cursor;
    node*agla;
    string helper(node*root){
        node*temp=root;
        string ans="";
        int t=10;
        while(temp->data!=' '&&temp!=NULL&&t--){
            ans+=temp->data;
            temp=temp->prev;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    TextEditor() {
        node *n=new node(' ');
        head=n;
        cursor=head;
        agla=head->next;
    }
    
    void addText(string text) {
        for(int i=0;i<text.length();i++){
            node*n=new node(text[i]);
            cursor->next=n;
            n->next=agla;
            if(agla!=NULL){
                agla->prev=n;
            }
            n->prev=cursor;
            cursor=n;
        }
    }
    
    int deleteText(int k) {
        int ans=0;
        while(cursor->data!=' '&&cursor!=NULL&&k>0){
            cursor=cursor->prev;
            ans++;
            k--;
        }
        if(agla!=NULL)agla->prev=cursor;
        cursor->next=agla;
        return ans;
    }
    
    string cursorLeft(int k) {
        while(cursor->data!=' '&&cursor!=NULL&&k>0){
            agla=cursor;
            cursor=cursor->prev;
            k--;
        }
        
        string ans=helper(cursor);
       return helper(cursor);
        
    }
    
    string cursorRight(int k) {
        while(agla!=NULL&&k>0){
            cursor=agla;
             agla=agla->next;
            k--;
        }
        return helper(cursor);
    }
};

/**
 * Your TextEditor object will be instantiated and called as such:
 * TextEditor* obj = new TextEditor();
 * obj->addText(text);
 * int param_2 = obj->deleteText(k);
 * string param_3 = obj->cursorLeft(k);
 * string param_4 = obj->cursorRight(k);
 */