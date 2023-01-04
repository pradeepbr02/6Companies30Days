#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>temp;
        temp = nums;
        sort(temp.begin() , temp.end());
        int i;

        for(i=0;i<temp.size();i++){
            if(nums[i]!=temp[i]){
                break;
            }
        }
        int j;
        for( j=nums.size()-1;j>=0;j--){
            if(nums[j]!=temp[j]){
                break;
            }
        }
       int count=0;
       for(int k=i;k<=j;k++){
           count++;
       }
       return count;
    }
};