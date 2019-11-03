/*
 * 40.implement-queue-by-two-stacks
 *
 *  Created on: Oct 26, 2019
 *      Author: Aaron
 *
 *  https://www.lintcode.com/problem/implement-queue-by-two-stacks/description
 *  Write a function that add two numbers A and B.
 *  As the title described, you should only use two stacks to implement a queue's actions.
 *  The queue should support push(element), pop() and top() where pop is pop the first(a.k.a front) element in the queue.
 *  Both pop and top methods should return the value of first element.
 */
class MyQueue {
public:
    stack<int> values,topper;
    /*
     * @param element: An integer
     * @return: nothing
     */
    void push(int element) {
        values.push(element);
    }

    /*
     * @return: An integer
     */
    int top() {
        if(topper.empty())while(!values.empty()){
            topper.push(values.top());
            values.pop();
        }
        return topper.top();
    }

    /*
     * @return: An integer
     */
    int pop() {
        int out=top();
        topper.pop();
        return out;
    }
};

//*
#pragma GCC diagnostic ignored "-Wunused-function"
static//*/
int test() { // @suppress("Unused static function")
	MyQueue s;
	s.push(1);
	assert(s.pop()==1);
	s.push(2);
	s.push(3);
	assert(s.top()==2);
	assert(s.pop()==2);
	cout<<"implement-queue-by-two-stacks passed.\n";
	return 0;
}
