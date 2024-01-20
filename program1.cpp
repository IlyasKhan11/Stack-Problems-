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

class Solution2 {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char,int>>st;
        for(auto c:s){
            if(st.size()==0 || st.back().first !=c){
                st.push_back({c,1});
            }else{
                st.back().second++;
            }

            if(st.back().second==k){
                st.pop_back();
            }
        }

        string ans="";
        for(auto x:st){
            ans.append(x.second,x.first);
        }
        return ans;
    }
};
int main(){

	
	return 0;
}
