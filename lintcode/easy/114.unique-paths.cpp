/*
 * 114.unique-paths.cpp
 *
 *  Created on: Sep 1, 2019
 *      Author: Aaron
 *
 *  https://www.lintcode.com/problem/unique-paths/description
 *  A robot is located at the top-left corner of a m x n grid.
 *  The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid.
 *  How many possible unique paths are there?
 */
#include "../utils/utils.h"
using namespace std;
class Solution {
public:
	/**
	 * @param m: positive integer (1 <= m <= 100)
	 * @param n: positive integer (1 <= n <= 100)
	 * @return: An integer
	 */
	int uniquePaths(int m, int n) {
		int map[m][n];
		memset(map, 0, sizeof(map));
		for (int i = 0; i < m; i++)
			map[i][0] = 1;
		for (int i = 0; i < n; i++)
			map[0][i] = 1;
		for (int i = 1; i < m; i++)
			for (int j = 1; j < n; j++)
				map[i][j] = map[i - 1][j] + map[i][j - 1];
		return map[m - 1][n - 1];
	}
};
//*
 #pragma GCC diagnostic ignored "-Wunused-function"
 static//*/
int test() { // @suppress("Unused static function")
	Solution s;
	assert(s.uniquePaths(3, 3) == 6);
	cout << "unique-paths passed";
	return 0;
}
