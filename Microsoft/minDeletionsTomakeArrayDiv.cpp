#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int count=0;
        int gcd = numsDivide[0];
        for(int i=0;i<numsDivide.size();i++){
            gcd = __gcd(gcd , numsDivide[i]);

        }
        sort(nums.begin() , nums.end());

        for(int i=0 ; i<nums.size();i++){
            if(gcd % nums[i]==0){
                break;
            }
            else{
            count++;
            }
        }
        if(count==nums.size()){
            return -1;
        }
        return count;
    }
};