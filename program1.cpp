#include<iostream>
#include<conio.h>
#include<stack>
#include<string>

using namespace std;


class Solution {
public:
    string removeDuplicates(string &s) {
        int n=s.length();
        stack<char>st;
        int i=0;//pointer
        while(i<n){
            if(st.empty() || st.top() != s[i]){
                st.push(s[i]);
            }else{
                st.pop();
            }
            i++;
        }
        string ans="";
        while(!st.empty()){
            char ch=st.top();
            ans.insert(ans.begin(),ch);
            st.pop();
        }
    
        return ans;
    }
};


int main(){
	Solution func;
	string s="abbacd";
	func.removeDuplicates(s);
	cout<<s<<endl;
	
	
	return 0;
}
