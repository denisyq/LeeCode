/* 283. Move Zeroes
 * Description: move 0 to the last position in vector
 */
class Solution {
public:
    void moveZeroes(vector<int>& nums){
        int num_zero = 0;
        vector<int>::iterator it = nums.begin();
        while(it != nums.end() ){
            if(*it == 0){
                it = nums.erase(it);
                num_zero++;
            }else
                it++;
        }
        if(num_zero){
            vector<int> zeroes(num_zero,0);
            nums.insert(nums.end(),zeroes.begin(),zeroes.end());
        }
    }
};
