#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
       map<int, int>mp;
        

        for(auto it : barcodes){
            mp[it]++;
         
        }

        priority_queue<pair<int , int>>pq;

        for(auto it : mp){
            pq.push({it.second , it.first});
        }

        vector<int>ans(barcodes.size() ,0);
        int i=0;

        while(!pq.empty()){
            pair<int,int> p =pq.top();
            pq.pop();

            while(p.first--){
                 if(i >=ans.size()){
                    i=1;
                }
                ans[i]=p.second;
               
                i+=2;

            }
        }

     


        return ans;

    }
};