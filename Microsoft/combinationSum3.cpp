#include <bits/stdc++.h>
using namespace std;
class Solution {
public:

void solve(int k , int n , vector<int>v , vector<vector<int>>&mat , int j){
    if(k==0 and n==0){
        mat.push_back(v);
        return ;
    }

    if(n==0){
        return ;
    }
    if(k==0){
        return;
    }

    for(int i=j ;i<=9;i++){
        v.push_back(i);
        solve(k-1 , n-i , v , mat , i+1);
        v.pop_back();
    }

}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>mat;
        if(k>=n or n==1){
            return mat;
        }
        vector<int>v;
        solve(k , n , v , mat , 1);

        return mat;
    }
};