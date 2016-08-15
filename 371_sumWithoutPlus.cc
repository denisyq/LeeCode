/*
 * 371. Sum of Two Integers
 *
 * Description: Do not use +/- to calculate sum
 * Tip        : c 负责所有0,1相加, d 负责 1|1 进位
 */
class Solution {
public:
    int getSum(int a, int b) {
        if(b==0) return a;
        int c = a^b;
        int d = (a&b)<<1;
        return getSum(c,d);
    }
};
