//#include<bits/stdc++.h>
class Solution {
public:
    string originalDigits(string s) {
        unordered_map<char,int>freq;
        for(auto it:s)freq[it]++;
        string ans="";
        if(freq.find('z')!=freq.end()){
            int temp=freq['z'];
            cout<<temp;
             freq['z']-=temp;
                freq['e']-=temp;
                freq['r']-=temp;
                freq['o']-=temp;   
            while(temp--){
                ans+='0';
                            
            }   
            
        }
        if(freq.find('w')!=freq.end()){
            int temp=freq['w'];
            cout<<temp;
            freq['t']-=temp;
                freq['w']-=temp;
                freq['o']-=temp;
            while(temp--){
                ans+='2';
            }
            
        }
        if(freq.find('u')!=freq.end()){
            int temp=freq['u'];
            freq['f']-=temp;
                freq['o']-=temp;
                freq['u']-=temp;
                freq['r']-=temp;
            while(temp--){
                ans+='4';                
            }            
            
        }
         if(freq.find('x')!=freq.end()){
            int temp=freq['x'];
             freq['s']-=temp;
                freq['i']-=temp;
                freq['x']-=temp;
            while(temp--){
                ans+='6';
            }
             
        }
        if(freq.find('g')!=freq.end()){
            int temp=freq['g'];
            freq['e']-=temp;
                freq['i']-=temp;
                freq['g']-=temp;
                freq['h']-=temp;
                freq['t']-=temp;
            while(temp--){
                ans+='8';
            }            
            
        }
        if(freq['o']!=0){
            int temp=freq['o'];
            freq['o']-=temp;
                freq['n']-=temp;
                freq['e']-temp;
            while(temp--){
                ans+='1';
            }            
            
                
        }
        if(freq['t']!=0){
            int temp=freq['t'];  
            cout<<temp;
                freq['t']-=temp;
                freq['h']-=temp;
                freq['r']-=temp;
                freq['e']-=temp;
                freq['e']-=temp;
            while(temp--){
                ans+='3';
            }   
        }
        if(freq['f']!=0){
            int temp=freq['f'];
            freq['f']-=temp;
                freq['i']-=temp;
                freq['v']-=temp;
                freq['e']-=temp;
            while(temp--){
                ans+='5';
            }            
                    }
        if(freq['s']!=0){
            int temp=freq['s'];
            freq['s']-=temp;
                freq['e']-=temp;
                freq['v']-=temp;
                freq['e']-=temp;
                freq['n']-=temp;
            while(temp--){
                ans+='7';
            }            
        }
        if(freq['i']!=0){
            int temp=freq['i'];
            freq['n']-=temp;
                freq['i']-temp;
                freq['n']-=temp;
                freq['e']-=temp;
            while(temp--){
                ans+='9';
            }            
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};