/*class Solution{//71ms
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
};*/
class Solution{//40ms
public:
    bool containsDuplicate(vector<int>& nums){
        if(nums.size()<=1) return false;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] != nums[i+1]) continue;
            else return true;
        }
        return false;
    }
};
