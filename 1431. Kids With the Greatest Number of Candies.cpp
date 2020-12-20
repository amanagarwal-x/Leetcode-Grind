#include<iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> op;
        int max = 0;
        for(int i = 0; i < candies.size(); i++){
            if (candies[i] >= max){
                max = candies[i];
            }
        }
        for(int i = 0; i < candies.size(); i++){
            if (candies[i] + extraCandies >= max){
                op.push_back(true);
            }
            else{
                op.push_back(false);
            }
        } 
        return op;
    }
};




class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int flag = 0;
        for(int i = 0;i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                if (j > i) flag ++;
            }
        }
    }
};        