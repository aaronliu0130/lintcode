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
