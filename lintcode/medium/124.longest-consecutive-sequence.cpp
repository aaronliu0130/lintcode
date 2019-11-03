/*
 * 124.longest-consecutive-sequence.cpp
 *
 *  Created on: Sep 28, 2019
 *      Author: Aaron
 *      https://www.lintcode.com/problem/longest-consecutive-sequence/description
 *      Given an unsorted array of integers, find the length of the longest consecutive elements sequence.
 */

#include "../utils/utils.h"
using namespace std;
class Solution {
public:
	int longestConsecutive(vector<int> &num) {
		// write your code here
		unordered_map<int, int> M;
		int m = 0;
		for (auto n : num)
			if (M[n] == 0)
				m = max(
						M[n + M[n + 1]] = M[n - M[n - 1]] = M[n] = M[n + 1]
								+ M[n - 1] + 1, m);
		return m;
	}
};

//*
#pragma GCC diagnostic ignored "-Wunused-function"
static //*/
int test() {
	Solution s;
	vector<int> num={100,4,200,1,3,2};
	assert(s.longestConsecutive(num)==4);
	cout << "124.longest-consecutive-sequence.cpp passed.\n";
	return 0;
}
