// { Driver Code Starts
#include<iostream>
#include<stack>
using namespace std;
void push(stack<int>& s,int a);
bool isFull(stack<int>& s,int n);
bool isEmpty(stack<int>& s);
int pop(stack<int>& s);
int getMin(stack<int>& s);
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty(s)){
		    pop(s);
		}
		while(!isFull(s,n)){
			cin>>a;
			push(s,a);
		}
		cout<<getMin(s)<<endl;
	}
}// } Driver Code Ends

#include <bits/stdc++.h>
vector<int>nums;
void push(stack<int>& s, int a){
	// Your code goes here
	nums.push_back(a);
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	if(nums.size()>=n)return true;
	else return false;
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	if(nums.size()==0)return true;
	else return false;
}

int pop(stack<int>& s){
	// Your code goes here
	nums.pop_back();
}

int getMin(stack<int>& s){
	// Your code goes here
	return *min_element(nums.begin(),nums.end());
}