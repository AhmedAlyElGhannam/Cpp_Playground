#include <iostream>
using namespace std;

int main()
{
	int nb, ng, nt;
	
	cin >> nb >> ng >> nt;
	
	bool case1 = nb > 25;
	cout << case1 << endl;
	
	bool case2 = ng <= 30;
	cout << case2 << endl;
	
	bool case3 = (nb > 20) && (nt > 2) || (ng > 30) && (nt > 4);
	cout << case3 << endl;
	
	bool case4 = (nb < 60) || (ng < 70);
	cout << case4 << endl;
	
	bool case5 = !((nb >= 60) || (ng >= 70));
	cout << case5 << endl;
	
	bool case6 = ((ng + 10) == nb);
	cout << case6 << endl;
	
	bool case7 = ((nb - ng > 10) || (nt > 5));
	cout << case7 << endl;
	
	bool case8 = ((ng + 10) == nb) || ((nb + 15) == ng);
	
	return 0
}