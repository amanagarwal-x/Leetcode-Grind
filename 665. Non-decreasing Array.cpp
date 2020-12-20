#include<iostream>
#include <vector>
using namespace std;


// class Solution {
// public:
//     bool checkPossibility(vector<int>& nums) {
//         int flag = 0;
//         for(int i = 0; i < nums.size() - 1; i++){
//             if (nums[i] >= nums[i+1]){
//                 flag++;
//             }
//         }
//         if (flag > 1) return false;
//         else return true;
//     }
// };


class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int flag = 0;
        for(int i = 0;i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                if (nums[j] < nums[i]) {
                    flag ++;
                    nums.erase(nums.begin() + j);
                    break;
                }
            }
        }
        if (flag > 1) return false;
        else return true;
    }
};        