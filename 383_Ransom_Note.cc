/* 383. Ransom Note
 * Description: each letter of ransomNote should be included in magazine string
 */
class Solution{
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size()>magazine.size()) return false;
        sort(magazine.begin(),magazine.end());
        sort(ransomNote.begin(),ransomNote.end());
        for(int i=0;i<ransomNote.size();i++){
            size_t pos = magazine.find(ransomNote[i]);
            if(pos != string::npos){
                magazine.erase(magazine.begin()+pos);
            }
            else return false;
        }
        return true;
    }
};
