/* 计算两个string是否乱序相等
 * 有个思路是：s和t变成 char-97的int，然后在int[26]中计算出现次数，算法较快
 */
class Solution{
public:
    bool isAnagram(string s, string t){
        if(s.size() != t.size()) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s.compare(t) ==0) return true;
        else return false;
    }
};
