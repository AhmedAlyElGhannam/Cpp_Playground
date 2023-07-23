#include <iostream>
#include <queue>
using namespace std;


// make a stack based on queue!
// do push, pop, top, empty methods such that queue will behave as a stack
struct OurStack
{
	queue<int> q;
	
	void push(int val) // queues are inherently fifo, stacks are lifo
	{
		queue<int> dumDum_q;
		dumDum_q.push(val);
		
		while(q.size())
		{
			dumDum_q.push(q.front());
			q.pop();
		}
		q.swap(dumDum_q);
	}
	void pop()
	{
		if (!q.empty())
			q.pop(); // pops from the end of queue
	}
	int top()
	{
		if (q.empty())
			return -1;
		
		return q.front(); 
	}
	bool empty()
	{
		return q.empty();
	}
};



int main()
{
	struct OurStack stk;
	
	cout << stk.empty() << endl;
	
	stk.push(10);
	stk.push(20);
	cout << stk.top() << endl;
	stk.pop(); // removes 20 and 10 only remains
	cout << stk.top() << endl;
	stk.push(30);
	stk.push(40);
	cout << stk.empty() << endl;
	cout << stk.top() << endl;
	
	return 0;
}
