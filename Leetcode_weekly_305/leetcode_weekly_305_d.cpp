class Solution {
public:
    
    int f(int i,string &s,int &k,char prev,vector<vector<int>>&dp){
         if(i>=s.size()) return 0;
        
         if(dp[i][prev]!=-1) return dp[i][prev];   
         int ntake=0;
             ntake=f(i+1,s,k,prev,dp);
         int take=0;
         if(abs(s[i]-prev)<=k or prev==0){
             take=1+f(i+1,s,k,s[i],dp);
          }
        return dp[i][prev]=max(take,ntake);
    }
    
    
   
    int longestIdealString(string s, int k) {
         vector<vector<int>>dp(s.size()+1,vector<int>(150,-1));
         return f(0,s,k,0,dp);
    }
};