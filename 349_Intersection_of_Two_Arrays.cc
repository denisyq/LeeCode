/* 349. Intersection of Two Arrays
 * Description: intersection array of two given array
 * Tip: given [2,3,4], [1,2,3], return [2,3]
 */
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2){
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        nums1.erase(unique(nums1.begin(),nums1.end()),nums1.end());
        nums2.erase(unique(nums2.begin(),nums2.end()),nums2.end());
        for(vector<int>::iterator it = nums2.begin(); it != nums2.end();){
            if(binary_search(nums1.begin(),nums1.end(),*it)){
                it++;
            }else{
                it = nums2.erase(it);
            }
        }
        return nums2;
    }
};
