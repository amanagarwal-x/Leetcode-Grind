#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer;
        
        for (int i = 0; i < nums.size(); i++){
            answer.push_back(1);
            for (int j = 0; j < nums.size(); j++){
                if (j != i)
                    answer[i] = answer[i]* nums[j];
            }
        }
        return answer;
    }
};