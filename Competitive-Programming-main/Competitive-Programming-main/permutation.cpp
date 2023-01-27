#include<bits/stdc++.h>
class Solution {
    void permutations(int ind,vector<int>&nums ,vector<int>&res, vector<vector<int>>&ans,vector<int>&vis){
        if(ind>=nums.size()){
            ans.push_back(res);
            return;
        }
        
        for(int i = 0; i<nums.size(); i++){
            if(!vis[i]){
                res.push_back(nums[i]);
                vis[i] = 1;
                permutations(ind+1,nums,res,ans,vis);
                res.pop_back();
                vis[i] = 0;}
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        if(nums.size()==0) return ans;
        vector<int>res;
        vector<int>vis(nums.size(),0);
        permutations(0,nums,res,ans,vis);
        return ans;
    }
};