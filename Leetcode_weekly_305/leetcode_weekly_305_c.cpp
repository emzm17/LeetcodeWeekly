class Solution {
public:
    
    int f(int i,vector<int>&nums,vector<int>&dp){
         if(i>=nums.size()) return 1;
         
         int ans=0;
         
         if(dp[i]!=-1) return dp[i];
        
         if(i+2<nums.size() and nums[i]+1==nums[i+1] and nums[i+1]+1==nums[i+2]){
                ans=ans|f(i+3,nums,dp);
         }
         if(i+2<nums.size() and nums[i]==nums[i+1] and nums[i+1]==nums[i+2]) {
              ans=ans|f(i+3,nums,dp);
         }
        
         if(i+1<nums.size() and nums[i+1]==nums[i]){
              ans=ans|f(i+2,nums,dp);
         }
         dp[i]=ans;
        
        return  dp[i];
    }
    
    
    bool validPartition(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return f(0,nums,dp);
    }
};