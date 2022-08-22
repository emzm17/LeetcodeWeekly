class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& sh) {
          vector<int>pre(s.size()+1,0);
          for(int i=0;i<sh.size();i++){
                int si=sh[i][0];
                int ei=sh[i][1];
                int type=sh[i][2];
              
               if(type==1){
                   pre[si]+=1;
                  pre[ei+1]-=1;
               }
               else{
                pre[si]-=1;
                pre[ei+1]+=1;   
          }
              
    }
          int cnt=0;
        //  for(int i=0;i<s.size()+1;i++){
          //    cout<<pre[i]<<" ";
          //}
          //cout<<"\n";
          for(int i=0;i<s.size();i++){
                 cnt+=pre[i];
                 s[i]=(char)((((s[i]-'a')+(cnt))%26+26)%26+'a');
                
            //     cout<<s<<"\n";
          }    
              
        return s;
    }
};