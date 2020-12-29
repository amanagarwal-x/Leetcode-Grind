#include<iostream>
#include <vector>
using namespace std;


    class Solution {
    public:
        vector<int> findDisappearedNumbers(vector<int>& nums) {
            vector <int> answer;
            for (int i = 0; i < nums.size(); i++){
                answer.push_back(i + 1);
            }


            for (int i = 0; i < nums.size(); i++){
                // answer[nums[i]-1] = nums[i];
                answer[nums[i]-1] = 0;
            }

              vector <int> ans;
            for (int i = 0; i < answer.size(); i++){
                if (answer[i] != 0){
                    ans.push_back(i + 1);
                }
            }
        return ans;
        }
    };




class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector <int> answer;
        for (int i = 0; i < nums.size(); i++){
            answer.push_back(i+1);
        }


        for (int i = 0; i < nums.size(); i++){
            answer[nums[i]-1] = 0;
        }

        answer.erase( remove(answer.begin(), answer.end(), 0), answer.end() );
    return answer;
    }
};