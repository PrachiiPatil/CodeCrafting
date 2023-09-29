// LeetCode Problem
// 9. Palindrome Number

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        int num = x;
        int rev = 0;
        while(num != 0){
            int last = num % 10;
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && last > 7)) {
                return false;
            }
            rev = (rev * 10)+last;
            num /= 10;
        }
        if(rev == x)
            return true;

        return false;
    }
};