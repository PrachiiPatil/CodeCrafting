// LeetCode Problem
// 1903. Largest Odd Number in String

class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        int index = -1;
        int size = num.length();
        for(int i = size-1 ; i >= 0 ; i--){
            if(num[i] % 2 != 0){
                index = i;
                break;
            }
        }
        if(index != -1){
            for(int j = 0 ; j <= index ; j++){
                ans += num[j];
            }
        }
        return ans;
    }
};