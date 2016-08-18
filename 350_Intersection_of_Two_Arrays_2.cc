/* 350. Intersection of Two Arrays II
 * Description: Each element in the result should appear as many times as it shows in both arrays.
 * Tip: 这题要求尽可能多的element，所以不能unique了
 */
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2){
        //what if sorted?
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        if(nums1.size() < nums2.size()){
            vector<int>::iterator start = nums2.begin();
            for(vector<int>::iterator it = nums1.begin(); it != nums1.end();){
                if(binary_search(start,nums2.end(),*it)){
                    start = nums2.erase(lower_bound(start,nums2.end(),*it));
                    it++;
                }
                else if(it+1 == nums1.end()){
                    nums1.erase(it);
                    break;
                }else{
                    it = nums1.erase(it);
                }
            }
            return nums1;
        }else{
            vector<int>::iterator start = nums1.begin();
            for(vector<int>::iterator it = nums2.begin(); it != nums2.end();){
                if(binary_search(start,nums1.end(),*it)){
                    start = nums1.erase(lower_bound(start,nums1.end(),*it));
                    it++;
                }else if(it +1 == nums2.end()){
                    nums2.erase(it);
                    break;
                }else {
                    it = nums2.erase(it);
                }
            }
            return nums2;
        }
    }
};
