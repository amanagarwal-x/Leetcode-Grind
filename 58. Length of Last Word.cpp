#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        for (int i = 0; i < s.length(); i++){
            if(s[i] == ' ' && i != s.length() - 1){
                if (s[i+1]!= ' '){
                    count = 0;
                }
            }
            if (s[i] != ' '){
                count ++;
            }
        }
        return count;
    }
};