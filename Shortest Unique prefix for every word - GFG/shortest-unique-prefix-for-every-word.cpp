// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution
{
    struct node{
        node* ar[26];
        int cnt;
    };
    node* getnode(){
        node* n = new node;
        n->cnt = 0;
        for(int i=0;i<26;i++){
            n->ar[i] = NULL;
        }
        return n;
    }
    void insert(node* root , string s){
        node* head = root;
        for(auto i: s){
            int id = (int)(i - 'a');
            if(head->ar[id] == NULL){
                head->ar[id] = getnode();
            }
            head->cnt++;
            head = head->ar[id];
        }
    }
    string search(node* root , string s){
        node* head = root;
        string tem = "";
        for(auto i: s){
            int id = (int)(i-'a');
            if(head->cnt == 1){
                return tem;
            }
            tem += i;
            head = head->ar[id];
        }
        return tem;
    }
    public:
    vector<string> findPrefixes(string arr[], int n)
    {
        node *root = getnode();
        for(int i=0;i<n;i++){
            insert(root , arr[i]);
        }
        vector<string> ans;
        for(int i=0;i<n;i++){
            string tem = search(root , arr[i]);
            ans.push_back(tem);
        }
        return ans;
    }
    
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
            
        Solution ob;
        vector<string> ans = ob.findPrefixes(arr, n);
        
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] <<" ";


        cout << "\n";

    }

    return 0;
}
  // } Driver Code Ends