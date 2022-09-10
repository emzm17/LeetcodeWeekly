class Solution {
public:
    
    bool c(vector<int>&b){
         for(int i=0;i<31;i++){
               if(b[i]>=2){
                   return false;
               }
         }
        return true;
    }
    
    
    int longestNiceSubarray(vector<int>& nums) {
         vector<int>b(31,0);
         int prev=0;
         int ans=1;
         for(int i=0;i<nums.size();i++){
               
               for(int j=0;j<31;j++){
                     if(nums[i] & (1<<j)){
                          b[j]++;
                     }
               }
               while(prev<=i and c(b)==false){
                      for(int j=0;j<31;j++){
                           if(nums[prev]&(1<<j)){
                               b[j]--;
                           }
                      }
                     prev++;
               }
             ans=max(ans,i-prev+1);
         }
        return ans;
    }
};