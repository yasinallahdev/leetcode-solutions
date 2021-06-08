class Solution {
public:
    int reverse(int x) {
        int reverse = 0;
        int lastDigit;
        bool negative;
        if(0 > x) {
            if(-2147483647 > x) {
                return 0;
            }
            negative = true;
            x *= -1;
        } else {
            negative = false;
        }
        while(x > 0) {
            if(reverse > 214748364) {
                return 0;
            }
            lastDigit = x % 10;
            reverse = (reverse * 10) + lastDigit;
            x /= 10;
        }
        if(negative) {
            reverse *= -1;
        }
        return reverse;
    }
};