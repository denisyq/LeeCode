/*class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        set<int> iset;
        vector<int>::iterator it;
        pair<set<int>::iterator, bool> ret;
        for(int i=0;i<nums.size();i++){
            ret = iset.insert(nums[i]);
            if(ret.second == false){
                //dup one
                if(i<=k) return true;
                for(int j=i-1;j>=0;j--){
                    if(nums[j] == nums[i]){
                        if(i-j<=k) return true;
                        else break;
                    }
                }
            }
        }
        return false;
    }
};*/
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> imap;
        typedef map<int,int>::iterator ITER;
        pair<ITER, bool> ret;
        for(int i=0;i<nums.size();i++){
            ret = imap.insert(pair<int,int>(nums[i],i));
            if(ret.second == false){
                //dup one
                if(i-imap[nums[i]]<=k) return true;
                else imap[nums[i]] = i;
            }
        }
        return false;
    }
};
