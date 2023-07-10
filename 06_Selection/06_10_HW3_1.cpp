#include <iostream>
using namespace std;

int main()
{
	int x;
	int s1, e1, s2, e2, s3, e3;
	
	cin >> x >> s1 >> e1 >> s2 >> e2 >> s3 >> e3;
	
	int counter = 0;
	
	counter += ((x >= s1) && (x <= e1));
	
	counter += ((x >= s2) && (x <= e2));
	
	counter += ((x >= s3) && (x <= e3));
	
	cout << counter << endl;
	
	return 0;
}