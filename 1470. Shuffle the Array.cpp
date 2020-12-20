#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int j = nums.size()/2;
        vector <int> op;
        for(int i = 0; i < j; i++){
            op.push_back(nums[i]);
            op.push_back(nums[j]);
            j++;
        }
    }
};