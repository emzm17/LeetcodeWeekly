class Solution {
public:
    //#define 
    bool findSubarrays(vector<int>& nums) {
         int n=nums.size();
         vector<long long>pre(n,0);
         pre[0]=nums[0];
         for(int i=1;i<n;i++){
              pre[i]+=pre[i-1]+nums[i];
         }
         long long cnt=0;
         map<long long,int>mp;
         mp[pre[1]]++;
         for(int i=2;i<n;i++){
               mp[pre[i]-pre[i-2]]++;
         }
         for(auto it:mp){
              if(it.second>1){
                  cnt++;
              }
         }
        if(cnt>=1) return true;
        return false;
    }
};