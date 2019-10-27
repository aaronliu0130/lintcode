/*
 * 69.binary-tree-level-order-traversal.cpp
 *
 *  Created on: Jul 13, 2019
 *      Author: Aaron, jerron(Modified Jul 14,2019)
 *      https://www.lintcode.com/problem/binary-tree-level-order-traversal/description
 *      Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).
 */
#include "../utils/utils.h"

class Solution {
public:
    /**
     * @param root: A Tree
     * @return: Level order a list of lists of integer
     */
    vector<vector<int>> levelOrder(TreeNode * root) {
        // write your code here
        vector<vector<int>> result;
        if(root){
        queue<TreeNode*> Q;
        Q.push(root);
        while(!Q.empty()){
            result.push_back({});
            for(auto count=Q.size();count>0;--count){
                auto n=Q.front();
                Q.pop();
                result.back().push_back(n->val);
                if(n->left)
                    Q.push(n->left);
                if(n->right)
                    Q.push(n->right);
        }}}
        return result;
    }
};
class SolutionOLD{
public:
	/**
	 * @param root: A Tree
	 * @return: Level order a list of lists of integer
	 */
	vector<vector<int>> levelOrder(TreeNode * root){
		vector<vector<int>> result;
		if (root) {
			vector<TreeNode*> Q;
			Q.push_back(root);
			while (!Q.empty()) {
				result.push_back(vector<int>());
				for (int i = Q.size(); i > 0; i--) {
					auto n = Q.front();
					result.back().push_back(n->val);
					if(n->left)
						Q.push_back(n->left);
					if(n->right)
						Q.push_back(n->right);
				}
			}
		}
		return result;
};
//*
#pragma GCC diagnostic ignored "-Wunused-function"
static //*/
int test() { // @suppress("Unused static function")
	TreeNode test[] { {1, 2, 3}, {1, INT_MIN, 2, 3}};
	vector<vector<int>> expected[] { { {1}, {2, 3}},
		{	{	1}, {2}, {3}}};
	for (auto i = 0u; i < countof(test); ++i) {
		assertv(s.levelOrder(&test[i]), expected[i]);
		test[i].del();
	}
	/**
	 *  	 * LEGACY TESTING ONLY, PLEASE USE NEWER VERSION #merge-conflicts
	 *  	  TreeNode test { 1, 2, 3 };
	 *  	  vector<vector<int>> result = s.levelOrder(&test);
	 *  	  assertv(s.levelOrder(&test), { { 1 }, { 2, 3 } });
	 *  	  cout << "binary-tree-level-order-traversal passed.\n";
	 *  	  test.del()*/
	return 0;
}


