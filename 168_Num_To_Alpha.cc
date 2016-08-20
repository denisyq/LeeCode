/* 1 -> A
 * 2 -> B
 * 3 -> C
 * ...
 * 26 -> Z
 * 27 -> AA
 * 28 -> AB
 */

class Solution{
public:
    string convertToTitle(int n) {
        string out;
        deque<char> cv;
        if(n == 0) return " ";
        while(n%26){
            cv.push_front('A'+n%26-1);
            n = n/26;
        }
        if(n!=0 && n%26 ==0){
            cv.push_front('Z');
            while(n/26>1){
                cv.push_front('A'+n/26-1-1);
                n = n/26;
            }
        }
        out.assign(cv.begin(),cv.end());
        return out;
    }
};

    
