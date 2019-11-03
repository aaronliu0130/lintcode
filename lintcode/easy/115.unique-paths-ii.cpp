/*
 * 115.unique-paths-II.cpp
 *
 *  Created on: Sep 8, 2019
 *      Author: Aaron
 *
 *  https://www.lintcode.com/problem/unique-paths-ii/description
 *  Follow up for "Unique Paths":
 *  Now consider if some obstacles are added to the grids. How many unique paths would there be?
 *  An obstacle and empty space is marked as 1 and 0 respectively in the grid.
 */
#include "../utils/utils.h"
using namespace std;
class Solution {
public:
	/**
	 * @param obstacleGrid: A list of lists of integers
	 * @return: An integer
	 */
	int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid) {
		vector<vector<int>> map = obstacleGrid;
		int m = map.size(), n = map[0].size();
		for (int i = 0; i < m; i++) {
			if (map[i][0] != 1)
				map[i][0] = 1;
			else
				map[i][0] = -1;
		}
		for (int i = 1; i < n; i++) {
			if (map[0][i] != 1)
				map[0][i] = 1;
			else
				map[0][i] = -1;
		}
		for (int i = 1; i < m; i++)
			for (int j = 1; j < n; j++) {
				if (map[i][j] == -1) {
					map[i][j] = 0;
					continue;
				}
				map[i][j] = map[i - 1][j] + map[i][j - 1];
			}
		return map[m - 1][n - 1];
	}
};
//*
 #pragma GCC diagnostic ignored "-Wunused-function"
 static//*/
int test() { // @suppress("Unused static function")
	Solution s;
	vector<vector<int>> input = { { 0, 0, 0 }, { 0, 1, 0 }, { 0, 0, 0 } };
	printf("%d",s.uniquePathsWithObstacles(input));
	//assert(s.uniquePathsWithObstacles(input)==2);
	cout << "unique-paths-ii passed";
	return 0;
}
