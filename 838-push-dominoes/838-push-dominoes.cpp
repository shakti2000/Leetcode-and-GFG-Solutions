class Solution {
public:
    string pushDominoes(string dominoes) {
        int n = dominoes.length();
        queue<pair<int, char>> q;
        string ans = dominoes;  /*tmp buffer becoz don't want to alter input data*/
        
        /*push all left and right domino*/
        for( int i = 0; i < n; i++){
            if(dominoes[i] != '.'){
                q.push({i, dominoes[i]});
            }
        }
        
        /*BFS:- becuse we simultaneously push some of the dominoes either to the left or to the right.*/
        while(!q.empty()){
            pair<int, char> dom = q.front();
            q.pop();
            
            /* exp -  ..L change left adjacent only don't bother about R.L case because dute to queue property 
            we will handle this case if elseif statement*/
            if(dom.second == 'L'){
                if(dom.first > 0 && ans[dom.first-1] == '.'){
                    q.push({dom.first-1, 'L'});
                    ans[dom.first-1] = 'L';
                }
            }else if(dom.second == 'R'){
                if(dom.first + 1 < n && ans[dom.first+1] == '.'){
                    if(dom.first + 2 < n && ans[dom.first+2] == 'L'){ /*exp R.L do nothing pop from queue only.*/
                        q.pop();
                    }else{                                     /*if exp R.. change right adjacent.*/
                        q.push({dom.first+1, 'R'});
                        ans[dom.first+1] = 'R';   
                    }
                }
            }         
        }
        return ans;
	}
};