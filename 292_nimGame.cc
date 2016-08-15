/*
 * 292. Nim Game

 * Description: stone heaped, each of you can remove 1-3 pieces at one time, you remove first, the last piece removal is winner
 * Output     : odds you can win
 * Tip        : if stone num = 4, i can never win in all means
 */
class Solution {
public:
    bool canWinNim(int n) {
        if(n%4 == 0) return false;
        else return true;
    }
};
