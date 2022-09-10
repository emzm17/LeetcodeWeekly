class Solution {
public:
    int maximumRobots(vector<int>& c, vector<int>& r, long long b) {
         int i,j;
         i=j=0;
         int n=c.size();
         int ans=0;
         long long sum=0;
         deque<int>d;
         while(i<n){
              sum+=r[i];
              while(!d.empty() and c[d.back()]<c[i])d.pop_back();
              d.push_back(i++);
              long long temp=c[d.front()]+(i-j)*sum;
              while(temp>b){
                  sum-=r[j];
                  if(!d.empty() and d.front()<=j)d.pop_front();
                  j++;
                  if(i==j){
                      temp=0;
                  }
                  else{
                      temp=c[d.front()]+(i-j)*sum;
                  }
              }
             ans=max(ans,i-j);
         }
        return ans;
    }
};