class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& q) {
        // int sum=0;
         int n=nums.size();
         sort(nums.begin(),nums.end());
         for(int i=1;i<n;i++){
              nums[i]+=nums[i-1];
         }
         vector<int>ans;
         for(auto it:q){
              int sum=0;
              int j;
              for(j=0;j<n;j++){
                   if(sum+nums[j]>it)break;
              }
              ans.push_back(j);
         }
        
        return ans;
    }
};