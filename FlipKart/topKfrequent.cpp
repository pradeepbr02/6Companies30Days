#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

static bool comp(pair<string , int>&t1 , pair<string ,int>&t2){
    if(t1.second == t2.second){
        return t1.first <t2.first;
    }
    return t1.second > t2.second;
}
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string , int >mp;

        for(auto it : words){
            mp[it]++;
        }

        vector<pair<string ,int>> v;

        for(auto it : mp){
            v.push_back({it.first , it.second});
        }

        sort(v.begin() , v.end() , comp);

        vector<string>ans;
        int i=0;

        while(k--){
            ans.push_back(v[i++].first);

        }

        return ans;


    }
};