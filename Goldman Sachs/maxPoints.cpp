#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {

        if(points.size()<=2){
            return points.size();
        }
        int res=0;

        for(int i=0;i<points.size();i++){
            unordered_map<double , int>mp;
            int dup = 0;
            double slope =0.0;
            for(int j=0;j<points.size();j++){
                int y1 = points[i][1];
                int y2 = points[j][1];
                int x1 = points[i][0];
                int x2 = points[j][0];

                double dy = y2-y1;
                double dx = x2-x1;

                if(dy==0 and dx==0){
                    dup++;
                    continue;

                }

               if(dx!=0){
                   slope = dy*1.0/dx;
               }
               else{
                   slope = INT_MAX;
               }
               mp[slope]++;

            }

            if(mp.size()==0){
                res = dup;
            }
            else{
                for(auto it : mp){
                    res = max(res , it.second+dup);
                }
            }

        }
        return res;
    }
};