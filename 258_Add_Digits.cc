/* 258. Add Digits
 * Description: 12345 -> 1+2+3+4+5 = 15 -> 1+5 = 6, request not to use loop/recursive
 * Tip        : digital root(一个数的数根(digital root)就是它对9的余数)
 */

class Solution {
public:
    int addDigits_1(int num){
        int ret=0;
        if(num<10) return num;
        while(num>0){
            ret += num%10;
            num = num/10;
        }
        return addDigits(ret);
    }
    int addDigits_2(int num){
        int ret=0;
        if(num<10) return num;
        while(num>=10){
            num = num%10 + num/10;
        }
        return num;
    }
    int addDigits_3(int num){
        if(num>9)
            return addDigits(num/10+num%10);
        else
            return num;
    }
    int addDigits_4(int num){
        if(num != 0 && num%9==0) return 9;
        else return num%9;
    }
};
