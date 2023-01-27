class Solution {
public:

    vector<int>row={-2,-2,-1,-1,1,1,2,2},col={-1,1,-2,2,-2,2,1,-1};

    double func(int n,int k,int r,int c,vector<vector<vector<double>>>&dp){
        if(r>=n || c>=n || r<0 || c<0)return 0;
        if(k==0)return 1;

        if(dp[r][c][k]!=-1)return dp[r][c][k];

        double ans=0;
        for(int i=0;i<8;i++){
            int ri=r+row[i],cj=c+col[i];

            ans+=func(n,k-1,ri,cj,dp);
        }

        ans/=8;

        return dp[r][c][k]=ans;
    }

    double knightProbability(int n, int k, int row, int column) {
        vector<vector<vector<double>>>dp(n,vector<vector<double>>(n,vector<double>(k+1,-1)));

        return func(n,k,row,column,dp);
        
    }
};