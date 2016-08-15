/*
 * 118. Pascal's Triangle
 *     [1],
 *    [1,1],
 *   [1,2,1],
 *  [1,3,3,1],
 * [1,4,6,4,1]
 */

class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int> > v;
        if(numRows == 0) return v;
        v.reserve(numRows);
        vector<int> v1(1,1);
        v.push_back(v1);
        if(numRows ==1) return v;
        vector<int> v2(2,1);
        v.push_back(v2);
        for(int i=2;i<numRows;i++){
            vector<int> vn(v[i-1].size()+1,1);
            for(int j=1;j<v[i-1].size();j++){
                vn[j] = v[i-1][j-1]+v[i-1][j];
            }
            v.push_back(vn);
        }/*
        for(int i=0;i<v.size();i++){
            for_each(v[i].begin(),v[i].end(),print);cout<<endl;
        }*/
        return v;
    }
};
