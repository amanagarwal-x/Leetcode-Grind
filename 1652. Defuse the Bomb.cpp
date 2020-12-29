#include<iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int code_length = code.size();
        vector<int> answer (code_length);

        for  (int i = 0; i < code_length; i++){

            if (k > 0){
    
                for (int j = 1; j <= k; j++){
                    answer[i] = answer[i] + code[(i + j)%code_length];
                }
            } 

            else if (k < 0){
                
                for (int j = 1; j <= abs(k); j++){
                    answer[i] = answer[i] + code[(code_length + i - j)%code_length];
                }
            }
        
            else{
                answer[i] = 0;
            }
        }
        return answer;
    }
};

//same as above, little bit shortened

class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int code_length = code.size();
        vector<int> answer (code_length);

        for  (int i = 0; i < code_length; i++){

            if (k != 0){
    
                for (int j = 1; j <= abs(k); j++){
                    if (k > 0)
                        answer[i] = answer[i] + code[(i + j)%code_length];
                    
                    else
                        answer[i] = answer[i] + code[(code_length + i - j)%code_length];
                }
            } 

            else{
                answer[i] = 0;
            }
        }
        return answer;
    }
};