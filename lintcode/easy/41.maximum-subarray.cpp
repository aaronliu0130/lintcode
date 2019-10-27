/*
 * 41.maximum-subarray.cpp
 *
 *  Created on: Sep 22, 2019
 *      Author: Aaron
 */

#include "../utils/utils.h"
using namespace std;
class Solution {
public:
	int maxSubArray(vector<int> &nums) {
		int n=nums.size();
		if(!n)return 0;
		int ans=INT_MIN,sum=0;
		for(int i=0;i<n;i++){
			sum+=nums[i],ans=max(sum,ans);
			if(sum<0)sum=0;
		}
		return ans;
	}
};

//*
#pragma GCC diagnostic ignored "-Wunused-function"
static //*/
int test() {
	Solution s;
	vector<int> input = {-2,2,-3,4,-1,2,1,-5,3};
	assert(s.maxSubArray(input)==6);
	cout << "41.maximum-subarray.cpp passed.\n";
	return 0;
}
