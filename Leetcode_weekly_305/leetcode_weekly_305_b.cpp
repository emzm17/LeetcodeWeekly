class Solution {
public:
    
    int cnt; 
    void dfs(int idx,int par,vector<int>adj[],map<int,bool>&mp)
    {
         if(mp.find(idx)!=mp.end()) return ;
           cnt++;
          for(auto it:adj[idx]){
                 if(it!=par){
                  //     cout<<it<<" ";
                       dfs(it,idx,adj,mp);
               }
          }
    }
    
    int reachableNodes(int n, vector<vector<int>>& e, vector<int>& r) {
          
           vector<int>adj[n+1];
           map<int,bool>mp;
           for(int i=0;i<r.size();i++){
                mp[r[i]]=true;
           }
           for(int i=0;i<e.size();i++){
                 adj[e[i][0]].push_back(e[i][1]);
                 adj[e[i][1]].push_back(e[i][0]);
           } 
           cnt=0;
           dfs(0,-1,adj,mp);
           return cnt;    
    }
};