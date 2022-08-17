class Solution {
public:
    int edgeScore(vector<int>& e) {
         int n=e.size();
         map< long long,vector<int>>mp;
         for(int i=0;i<n;i++){
               mp[e[i]].push_back(i);
         }
         long long maxi=0;
         long long idx=-1;
         for(auto it:mp){
               long long sum=0;
               for(int i:it.second){
                   sum+=i;
               }
               if(sum>maxi){
                   maxi=sum;
                   idx=it.first;
               }
               else if(sum==maxi and idx>it.first){
                    idx=it.first;
               }
         }
        return idx;
    }
};