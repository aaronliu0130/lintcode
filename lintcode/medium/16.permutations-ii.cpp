/*
 * 16.permutations-ii.cpp
 *
 *  Created on: Jul 1, 2019
 *      Author: jerron
 *      https://www.lintcode.com/problem/permutations-ii/description
 *      Given a list of numbers with duplicate number in it. Find all unique permutations.
 */

#include "../utils/utils.h"

class Solution {
public:
	/*
	 * @param :  A list of integers
	 * @return: A list of unique permutations
	 */
	vector<vector<int>> permuteUnique(vector<int> nums) {
		// write your code here
		int s = nums.size();
		if (s < 1)
			return { {}};
		vector<int> states(s, 0);
		vector<bool> used(s + 1, 0);
		vector<vector<int>> ans;
		sort(nums.begin(), nums.end());
		nums.insert(nums.begin(), INT_MIN);
		for (int i = 0; i >= 0;) {
			auto prev = states[i];
			auto flag = 0;
			for (used[prev] = 0; !flag && ++states[i] <= s;
					flag = !used[states[i]] && nums[states[i]] != nums[prev])
				;
			if (flag) {
				used[states[i]] = 1;
				++i;
				if (i >= s) {
					vector<int> a(s);
					for (int j = 0; j < s; ++j)
						a[j] = nums[states[j]];
					ans.push_back(a);
					--i;
				} else
					states[i] = 0;
			} else
				--i;
		}
		return ans;
	}
};

//*
#pragma GCC diagnostic ignored "-Wunused-function"
static //*/
int test() { // @suppress("Unused static function")
	Solution s;
	assertv(s.permuteUnique( { 1, 2, 2, 3, 3 }), { { 1, 2, 2, 3, 3 }, { 1, 2, 3,
			2, 3 }, { 1, 2, 3, 3, 2 }, { 1, 3, 2, 2, 3 }, { 1, 3, 2, 3, 2 }, {
			1, 3, 3, 2, 2 }, { 2, 1, 2, 3, 3 }, { 2, 1, 3, 2, 3 }, { 2, 1, 3, 3,
			2 }, { 2, 2, 1, 3, 3 }, { 2, 2, 3, 1, 3 }, { 2, 2, 3, 3, 1 }, { 2,
			3, 1, 2, 3 }, { 2, 3, 1, 3, 2 }, { 2, 3, 2, 1, 3 },
			{ 2, 3, 2, 3, 1 }, { 2, 3, 3, 1, 2 }, { 2, 3, 3, 2, 1 }, { 3, 1, 2,
					2, 3 }, { 3, 1, 2, 3, 2 }, { 3, 1, 3, 2, 2 }, { 3, 2, 1, 2,
					3 }, { 3, 2, 1, 3, 2 }, { 3, 2, 2, 1, 3 },
			{ 3, 2, 2, 3, 1 }, { 3, 2, 3, 1, 2 }, { 3, 2, 3, 2, 1 }, { 3, 3, 1,
					2, 2 }, { 3, 3, 2, 1, 2 }, { 3, 3, 2, 2, 1 } });
	cout << "permutations-ii passed.\n";
	return 0;
}
