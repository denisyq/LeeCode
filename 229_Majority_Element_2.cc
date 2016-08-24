/* Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times. 
 * The algorithm should run in linear time and in O(1) space.
 */
 
/* 返回超过n/3的数字，不超过3个 */
/* 2016.08.24 只是做出来了，效率差且不是线性时间 */
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> iv;
        sort(nums.begin(),nums.end());
        int size = nums.size();
        int gap = size/3;
        int len = size - gap;
        for(int i=0;i<len;i++){
            if(nums[i] == nums[i+gap]){
                if(iv.size()==0){
                    iv.push_back(nums[i]);
                }
                else if(iv.back() != nums[i]){
                    iv.push_back(nums[i]);
                    i += gap;
                }
            }
        }
        return iv;
    }
};
