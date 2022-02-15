// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
//int total=str1.length()+str2.length();
map<char,int>mp;
for(auto it:str1){
    mp[it]++;
}
int ans=0;
for(auto it:str2){
    if(mp[it]!=0)mp[it]--;
    else ans++;
}

for(auto it:mp){
   // cout<<it.first<<","<<it.second<<endl;
    ans+=it.second;}
return ans;
}