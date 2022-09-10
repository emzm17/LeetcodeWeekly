class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
         map<char,vector<int>>mp;
         for(int i=0;i<s.size();i++){
              mp[s[i]].push_back(i);
         }
         bool flag=true;
         for(auto it:mp){
               char f=it.first;
               vector<int>temp=it.second;
               if((temp[1]-temp[0])-1 != distance[f-'a']){
                   // cout<<f<<" ";
                    return false;
               }
         }
        return true;
    }
};