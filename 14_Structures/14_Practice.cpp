#include <iostream>
#include <string>
using namespace std;

struct Queue
{
	int queue_size = 100;
	int queue[100];
	int added_elements = 0;
	
	void add_end(int value)
	{
		if (added_elements < 100)
		{
			queue[added_elements] = value;
			added_elements += 1;
		}
	}
	void add_front(int value)
	{
		// shift all right & put value at index 0
		if (added_elements < queue_size)
		{
			added_elements += 1;
			for (int i = added_elements; i > 0; i--)
				queue[i] = queue[i - 1];
			queue[0] = value;
		}
		else
		{
			cout << "Todododododo \n"
			     << "LEAKY MEMORY INTENSIFIES\n";
		}
		
	}
	int remove_front()
	{
		if (added_elements == 0)
			cout << "OH MY GOODNESS!\n" << "SQUIDWAAAAAAARD!\n";
		else
		{
			int value = queue[0];
			for (int i = 0; i < added_elements - 1; i++)
				queue[i] = queue[i + 1];
			
			added_elements -= 1;
			return value;
		}
		
		return -1;
	}
	void print()
	{
		for (int i = 0; i < added_elements; i++)
			cout << queue[i] << " ";
		
		cout << endl;		 
	}
};

int main()
{
	Queue our_q;
	
	our_q.add_end(10);
	our_q.add_end(20);
	our_q.add_end(30);
	our_q.print();
	
	our_q.add_front(1);
	our_q.add_front(4);
	our_q.print();
	
	cout << our_q.remove_front() << endl;
	
	return 0;
}