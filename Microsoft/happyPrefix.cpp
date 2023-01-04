#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestPrefix(string s) {
        int n = s.size();
        vector<int>prefix(n ,0);
        int i=1 , j=0;
        while(i < n){
            if(s[i]==s[j]){
                j++;
                prefix[i]=j;
                i++;
            }
            else{
                if(j==0){
                    prefix[i]=0;
                    i++;
                }
                else{
                    j=prefix[j-1];
                }
            }

        }
        return s.substr(0 , j);
    }
};