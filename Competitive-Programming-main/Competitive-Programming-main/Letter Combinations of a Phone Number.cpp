#include<bits/stdc++.h>
class Solution {
    void combination(int ind,string &res,vector<string>&ans,string arr[],string digits){
        if(ind>=digits.size()){
            ans.push_back(res);
            return;
        }
        
        int n = digits[ind]-'0';
        string value = arr[n];
        
        for(int i = 0; i<value.size(); i++){
            res.push_back(value[i]);
            combination(ind+1,res,ans,arr,digits);
            res.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.size()==0) return ans;
        string res= "";
        string arr[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        combination(0,res,ans,arr,digits);
        return ans;
    }
};