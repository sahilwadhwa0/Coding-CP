#include<bits/stdc++.h>
class Solution {
    void parenthesis(string &res,vector<string>&ans,int open,int close){
        if(open>close){
            return;
        }
        if(open==0 && close==0){
            ans.push_back(res);
            return;
        }
        if(open>0){
            res.push_back('(');
            parenthesis(res,ans,open-1,close);
            res.pop_back();   
        }
        if(open<close){
            res.push_back(')');
            parenthesis(res,ans,open,close-1);
            res.pop_back();
        }
        
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string res = "";
        int open = n,close = n;
        parenthesis(res,ans,open,close);
        return ans;
    }
};