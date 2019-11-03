/*
 * 12.min-stack.cpp
 *
 *  Created on: Oct 27, 2019
 *      Author: Aaron
 *
 *  https://www.lintcode.com/problem/min-stack/description
 *  Implement a stack with following functions:
 *      push(val) push val into the stack
 *      pop() pop the top element and return it
 *      min() return the smallest number in the stack
 *  All above should be in O(1) cost.
 */
class MinStack {
public:
    stack<int> s,Min;
    /*
     * @param number: An integer
     * @return: nothing
     */
    void push(int number) {
        if(Min.empty()||Min.top()>=number)Min.push(number);
        s.push(number);
    }

    /*
     * @return: An integer
     */
    int pop() {
        if(Min.top()==s.top())Min.pop();
        int num=s.top();
        s.pop();
        return num;
    }

    /*
     * @return: An integer
     */
    int min() {
        return Min.top();
    }
};

//*
#pragma GCC diagnostic ignored "-Wunused-function"
static//*/
int test() { // @suppress("Unused static function")
	MinStack s;
	s.push(1);
	assert(s.pop()==1);
	s.push(2);
	s.push(3);
	assert(s.min()==2);
	s.push(1);
	assert(s.min()==1);
	cout<<"min-stack passed.\n";
	return 0;
}
