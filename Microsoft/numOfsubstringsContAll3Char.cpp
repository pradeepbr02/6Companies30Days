#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfSubstrings(string s) {
        int r=0 , l=0 , count=0 , n=s.size()-1;

        map<char ,int >mp;

        while(r<s.size()){
            mp[s[r]]++;

            while(mp['a'] and mp['b'] and mp['c']){
                count+=1+(n-r); //(adding 1)this is just for my understanding that we have to add rest of the substrings after recognizing the 'abc' 
                mp[s[l]]--;
                l++;
            }
            r++;
        }
        return count;
    }
};