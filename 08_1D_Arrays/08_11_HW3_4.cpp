#include <iostream>
using namespace std;

int main()
{
	int group_size, k_count;
	cin >> group_size >> k_count;
	
	bool is_person_removed[200];
	int person_ptr = 0;
	
	for (int i = 0; i < 200; i++)
	{
		if (i < group_size)
			is_person_removed[i] = 1; // 1 means a person exist in this position
		else
			is_person_removed[i] = 0; // 0 means that no one is here
	}
	
	
	for (int heh = 0; heh < group_size; heh++) // 1 2 3 4, opc=4//
	{
		
		for (int i = 1; i <= (k_count % group_size); i++) // should GREATLY enhance performance
		{
			if ((i = k_count % group_size) && (is_person_removed[i-1] == 1))
			{
				is_person_removed[i-1] = 0;
				cout << i << " ";
			}
		}
		group_size--;
	}
	
	cout << endl;
	
	return 0;
}





