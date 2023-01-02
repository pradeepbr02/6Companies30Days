class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<int , int >mp;
        int cntbulls=0;
        int cntcows =0;
      for(int i=0;i<secret.size();i++){
          if(secret[i]==guess[i]){
              cntbulls++;

          }
          else {
              mp[secret[i]]++;
          }
      }
      for(int i=0;i<secret.size();i++){
          if(secret[i]!=guess[i] and mp[guess[i]]){
              cntcows++;
              mp[guess[i]]--;
          }
      }
        return to_string(cntbulls)+'A'+to_string(cntcows)+'B';
    }
};