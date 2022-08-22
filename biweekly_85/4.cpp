class Solution {
public:
    
    
    int f(long long i,vector<long long>&par){
         if(par[i]==-1) return i;
        
         return f(par[i],par);
    }
    
    
    void u(long long i,long long j,vector<long long>&par){
         if(f(i,par)!=f(j,par)){
             par[j]=i;
         }
    }
    #define ll long long
    vector<long long> maximumSegmentSum(vector<int>& nums, vector<int>& rq) {
        int n=nums.size();
       
        vector<ll> ans(n),val(n,0),vis(n,0),par(n,-1);
        
        long long fx=0;
        for(int i=n-1;i>=0;i--){
            ans[i]=fx;
            long long tot=nums[rq[i]];
            
            if(rq[i]-1>=0 and vis[rq[i]-1]==true){
                tot+=val[f(rq[i]-1,par)];
                u(rq[i]-1,rq[i],par);
            }
            if(rq[i]+1<n and vis[rq[i]+1]==true){
                 tot+=val[f(rq[i]+1,par)];
                 u(rq[i],rq[i]+1,par);
            }
            val[f(rq[i],par)]=tot;
            fx=max(tot,fx);
            vis[rq[i]]=true;
        }
    
        return ans;
    }
};