class Solution {
public:
    Node* connect(Node* root) {
        if(!root)return root;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int x=q.size();
            while(x--){
                Node* s=q.front();
                q.pop();
				
				/* If s is the rightmost node of current level, set next pointer to NULL */
                if(x==0)s->next=NULL;
                else s->next=q.front();
				
                if(s->left)q.push(s->left);
                if(s->right)q.push(s->right);
            }
        }
        return root;
    }
};