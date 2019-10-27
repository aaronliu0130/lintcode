/*
 * 17.subsets.cpp
 *
 *  Created on: Aug 24, 2019
 *      Author: Aaron
 */
#include "../utils/utils.h"
using namespace std;
class Solution {
public:
    /**
     * @param nums: A set of numbers
     * @return: A list of lists
     */
    vector<vector<int>> subsets(vector<int> &nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans(1);
        int size=nums.size(),s=1;
        ans.resize(1<<size);
        for(int i:nums){
            for(int j=0;j<s;j++)(ans[j+s]=ans[j]).push_back(i);
            s*=2;
        }
        return ans;
    }
};

//*
#pragma GCC diagnostic ignored "-Wunused-function"
static //*/
int test() { // @suppress("Unused static function")
	Solution s;
	vector<int> input={1,2,3};
	assertv(s.subsets(input),{{3},{1},{2},{1,2,3},{1,3},{2,3},{1,2},{}});
	cout << "subsets passed.\n";
	return 0;
}
