class Solution{
public:
    bool containsDuplicate(vector<int>& nums){
        set<int> iset;
        pair<set<int>::iterator, bool> ret;
        for(int i=0;i<nums.size();i++){
            ret = iset.insert(nums[i]);
            if(ret.second == false){
                return true;
            }
        }
        return false;
    }
};
