/*
 * 1.a-b-problem.cpp
 *
 *  Created on: Oct 26, 2019
 *      Author: Aaron
 */

#include "../utils/utils.h"
using namespace std;
class Solution {
public:
    /**
     * @param a: An integer
     * @param b: An integer
     * @return: The sum of a and b
     */
    int aplusb(int a, int b) {
        return a+b;
    }
};

/*
#pragma GCC diagnostic ignored "-Wunused-function"
static//*/
int test(){
	Solution s;
	assert(s.aplusb(1,2)==3);
	cout<<"a-b-problem passed.\n\t Looks like you have not set your running source. This is the default code that runs.\n\t Add the leading slash on line 22 and delete a slash on the program you want to run.\n";
	return 0;
}
