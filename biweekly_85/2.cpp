class Solution {
public:
    
    bool f(string s){
         for(int i=0;i<s.size()-1;i++){
              if(s[i]=='0' and s[i+1]=='1') return false;
         }
        
        return true;
    }
    
    int secondsToRemoveOccurrences(string s) {
         int cnt=0;
         while(true){
              if(f(s))break;
              int i=0;
               while(i<s.size()-1){
                   if(s[i]=='0' and s[i+1]=='1'){
                       s[i]='1';
                       s[i+1]='0';
                       i+=2;
                   }
                   else{
                       i++;
                   }
              }
              cnt++;
           //  cout<<s<<"\n";
         }
        return cnt;
    }
};