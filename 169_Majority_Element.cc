/* 找到array中出现次数超过array.size()/2的那个数 
 */
/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums.at(nums.size()/2);
    }
};
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        nth_element(nums.begin(),nums.begin()+nums.size()/2,nums.end());
        return nums[nums.size()/2];
    }
};
