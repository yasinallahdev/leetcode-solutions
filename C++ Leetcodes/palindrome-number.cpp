class Solution {
public:
    bool isPalindrome(int x) {
        // problem notes that negative numbers are not palindomes
        if(x < 0) {
            return false;
        }
        
        // if the number is nonzero and divisible by 10, it is not a palindrome;
        // the example given notes that 10 reads as 01 when reversed, and only 0 can
        // both start and end with 0 for a digit.
        if((x != 0) && ((x % 10) == 0)) {
            return false;
        }
        int originalNumber = x;
        int reverse = 0;
        int lastDigit = x % 10;
        while(x > 0) {
            if(reverse >= 214748364) {
                return false;
            }
            lastDigit = x % 10;
            reverse = (reverse * 10) + lastDigit;
            x = x / 10;
        }
        if(originalNumber == reverse) {
            return true;
        } else {
            return false;
        }
    }
};