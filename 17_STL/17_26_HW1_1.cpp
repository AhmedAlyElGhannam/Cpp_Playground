#include <iostream>
#include <queue>
#include <stack>
using namespace std;


// reverse a queue using a stack
void reverse_queue(queue<int> &q)
{
	stack<int> stk;
	
	// loop 1: empty q
	while ((int)q.size()) // as long as q is not empty
	{
		stk.push(q.front()); 
		q.pop();
	}
	
	cout << endl;
	
	// loop 2: repopulate q
	while ((int)stk.size())
	{
		q.push(stk.top());
		stk.pop();
	}
	
}

void print_queue(queue<int> q)
{
	while ((int)q.size())
	{
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;
}

int main()
{
	queue<int> q1;
	
	q1.push(1);
	q1.push(2);
	q1.push(3);
	q1.push(4);
	q1.push(5);
	
	print_queue(q1);
	reverse_queue(q1);
	print_queue(q1);
	
	return 0;
}