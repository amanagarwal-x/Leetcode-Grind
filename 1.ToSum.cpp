#include<iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans ;
for (auto i = nums.begin(); i != nums.end(); ++i ){
            for (auto j = i + 1 ; j != nums.end(); ++j){
                if (*i + *j == target){
                    ans.push_back(i - nums.begin());
                    ans.push_back(j - nums.begin());
                }
            }
        }
        return ans;
    }
};


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=  i+1;j<nums.size();j++){
                if(nums[i]+nums[j] == target)   {
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;   
    }
};




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