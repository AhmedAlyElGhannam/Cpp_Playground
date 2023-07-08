#include <iostream>
using namespace std;

int main()
{
	int s1, e1, s2, e2;
	
	cin >> s1 >> e1 >> s2 >> e2;
	
	bool is_intersecting = (s2 >= s1) && (s2 <= e1) && (e1 >= s2) && (e1 <= e2);
	
	if (is_intersecting)
	{
		cout << s2 << " " << e1 << endl;
	}
	else
	{
		cout << -1 << endl;
	}
	
	return 0;
}