#if 0
class Solution{
public:
    string reverseString(string s){
        int len = s.size();
        string ret;
        ret.resize(len);
        for(int i=0;i<len/2;i++){
            ret[i] = s[len-i-1];
            ret[len-1-i] = s[i];
        }
        if(len%2 ==1) ret[len/2] = s[len/2];
        return ret;
    }
};
#endif

class Solution{
public:
    string reverseString(string s){
        int len = s.size();
        for(int i=0;i<len/2;i++){
            char tmp = s[i];
            s[i] = s[len-1-i];
            s[len-1-i]  = tmp;
        }
        return s;
    }
};
