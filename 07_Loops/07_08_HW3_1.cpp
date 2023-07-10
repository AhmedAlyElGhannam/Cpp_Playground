#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	string heh;
	while (n > 0)
	{	
		cin >> heh;
		if ((heh == "NO") || 
		    (heh == "No") || 
		    (heh == "nO") ||
		    (heh == "no") ||
		    (heh == "ON") ||
		    (heh == "On") ||
		    (heh == "oN") ||
		    (heh == "on"))
		{
			cout << heh << " ";
		}
		n--;
	}
	cout << endl;
	
	return 0;
}