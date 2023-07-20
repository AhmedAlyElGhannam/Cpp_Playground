#include <iostream>
#include <string>
#include <queue>
using namespace std;


// print te sum of k numbers from io stream 

// push() to add element to q
// front() to get the top element (returns the first element (still there))
// back() to get the bottom/last element (returns the last elem (still there))
// empty() to know if its empty (returns true or false)
// size() to know the q's size (returns int)
// pop() to remove the first element that entered it (no return)

int update_sum(queue<int> &q, int num, int queue_size = 4)
{
	static int sum = 0;
	q.push(num);
	
	sum += q.back();
	
	if ((int)q.size() > queue_size)
	{
		sum -= q.front();
		q.pop();
	}
	
	return sum;
}

int main()
{
	queue<int> q;
	int num;
	while (cin >> num)
		cout << update_sum(q, num) << endl;
	
	return 0;
}