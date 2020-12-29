#include<iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int start = 0;
      int sum = 0;
      for(int i = 0;i < nums.size(); i++){
          
          if (sum + nums[i] >= sum){
              sum  = sum + nums[i];
          }
    }
};