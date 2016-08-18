/* 27. Remove Element
 * Description: remove one value in array and return new length
 * Example: 1,2,3,4,2,2,3 val=2, return new len = 7-3 = 4
 * Tip: 最简单方法是O(n)，遍历一遍。效率好点应该先排序，再二分找
 */
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        sort(nums.begin(),nums.end());
        pair<vector<int>::iterator, vector<int>::iterator > ret = equal_range(nums.begin(),nums.end(),val);
        nums.erase(ret.first,ret.second);//这步其实不用写的，但是leecode还check最后nums里有啥，只有删掉才能过
        return nums.size();
    }
};
