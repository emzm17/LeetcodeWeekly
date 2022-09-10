class Solution {
public:
    int mod=1e9+7;
    map<pair<int,int>,int>mp;
    int f(int s,int e,int k,int cnt,vector<vector<int>>&dp,int dis){
        
         if(s==e and cnt==k) return 1;
         if(cnt>k) return 0;
         if(dp[s+dis][cnt]!=-1) return dp[s+dis][cnt];
        
         return dp[s+dis][cnt]=(f(s+1,e,k,cnt+1,dp,dis)%mod+f(s-1,e,k,cnt+1,dp,dis)%mod)%mod;
    
    } 
    
    
    int numberOfWays(int s, int e, int k) {
         int dis=abs(s-k);
         vector<vector<int>>dp(5001,vector<int>(5001,-1));
         return f(s,e,k,0,dp,dis)%mod;
    }
};