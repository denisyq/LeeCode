/* 这题跟168是反着来着 AA -> 27 A-> 1
 * 就是一个string，以26进制
 */

class Solution{
public:
    int titleToNumber(string s){
        int num,total=0;
        for(int i=0;i<s.size();i++){
            num = s[i] - 'A' + 1;
            total = total*26+num;
        }
        return total;
    }
};
