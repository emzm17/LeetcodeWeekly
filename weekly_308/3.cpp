class Solution {
public:
    int garbageCollection(vector<string>& g, vector<int>& t) {
        int ans=0;
        int it=0;
        while(it<3){
        if(it==0){   
        int tans=0;
        int last=0;    
        for(int i=0;i<g.size();i++){
                 string temp=g[i];
                 int cnt=0; 
                 for(int j=0;j<temp.size();j++){
                      if(temp[j]=='G')cnt++;
                 }
               if(cnt>0){
                   last=i;
                   tans+=cnt;
               }
               if(i<t.size())tans+=t[i];
        }
       for(int j=g.size()-2;j>=last;j--)tans-=t[j];
           
            ans+=tans;
        }
        else if(it==1){    
        int tans=0;
        int last=0;    
        for(int i=0;i<g.size();i++){
                 string temp=g[i];
                 int cnt=0; 
                 for(int j=0;j<temp.size();j++){
                      if(temp[j]=='P')cnt++;
                 }
               if(cnt>0){
                   last=i;
                   tans+=cnt;
               }
               if(i<t.size())tans+=t[i];
        }
       for(int j=g.size()-2;j>=last;j--)tans-=t[j];
           
            ans+=tans;
        }    
        else{
            int tans=0;
        int last=0;    
        for(int i=0;i<g.size();i++){
                 string temp=g[i];
                 int cnt=0; 
                 for(int j=0;j<temp.size();j++){
                      if(temp[j]=='M')cnt++;
                 }
               if(cnt>0){
                   last=i;
                   tans+=cnt;
               }
               if(i<t.size())tans+=t[i];
        }
       for(int j=g.size()-2;j>=last;j--)tans-=t[j];
           
            ans+=tans;
           }
            it++;
        }
        return ans;
    }
};