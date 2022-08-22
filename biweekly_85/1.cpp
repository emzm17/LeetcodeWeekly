class Solution {
public:
    int minimumRecolors(string b, int k) {
        int n=b.size();
       // cout<<n<<"\n";
        if(n==k){
            int cnt=0;
            for(int i=0;i<n;i++){
                if(b[i]=='W')cnt++;
            }
            return cnt;
        }
        int ans=INT_MAX;
        for(int i=0;i<n-k+1;i++){
              int j=i;
              int steps=0;
              int cnt=0;
              while(cnt<k){
                  if(b[j]=='W')steps++;
                  j++;
                  cnt++;
              } 
            ans=min(ans,steps);
        }
        return ans;
    }
};