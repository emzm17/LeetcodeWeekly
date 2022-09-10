class Solution {
public:
    int maximumRows(vector<vector<int>>& mat, int cols) {
         int m=mat[0].size();
        vector<vector<int>>arr((1<<m)+1,vector<int>(m,0));
        for(int i=0;i<=((1<<m)-1);i++){
            for(int j=0;j<m;j++){
                if((i&(1<<j))>=1){
                    arr[i][j]=1;
                }
            }
        }
        int ans=0;
        int count;
        int tcount;
        for(int i=0;i<=(1<<m)-1;i++){
             map<int,int>mp;
             count=0;
             for(int j=0;j<m;j++){
                 if(arr[i][j]==1){
                     mp[j]++;
                     count++;
                 }
             }
            tcount=0;
            if(count==cols){
                for(int i=0;i<mat.size();i++){
                   bool flag=false; 
                    for(int j=0;j<mat[0].size();j++){
                        if(mp[j]==0){
                            if(mat[i][j]==1){
                                flag=true;
                        }
                      }
                    }
                   if(!flag){
                       tcount++; 
                }
              }

            } 
          ans=max(ans,tcount);
        }
        return ans;
    }
};