#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maximum69Number (int num) {
        string num_str= to_string(num);  
        int num_length = num_str.length();

        for(int i = 0; i < num_length; i++){
            if (num_str[i] == '6'){
                num_str[i] = '9';
                break;
            }
        }
        return stoi(num_str);
    }
};