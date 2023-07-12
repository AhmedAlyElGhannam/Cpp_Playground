#include <iostream>
#include <string>
using namespace std;

void input();
int max(int a, int b, int c);
int max(int a, int b, int c, int d);
int max(int a, int b, int c, int d, int e);
int max(int a, int b, int c, int d, int e, int f);

void input()
{
	int a, b, c, d, e, f;
	cin >> a
		>> b
		>> c
		>> d
		>> e
		>> f;
	cout << max(a, b, c, d, e, f) << endl;
}

int max(int a, int b, int c)
{
	if ((a >= b) && (a >= c))
		return a;
	else if ((b >= a) && (b >= c))
		return b;
	else
		return c;
}

int max(int a, int b, int c, int d)
{
	int temp = max(a, b, c);
	if (temp >= d)
		return temp;
	else
		return d;
}

int max(int a, int b, int c, int d, int e)
{
	int temp = max(a, b, c, d);
	if (temp >= e)
		return temp;
	else
		return e;
}

int max(int a, int b, int c, int d, int e, int f)
{
	int temp = max(a, b, c, d, e);
	if (temp >= f)
		return temp;
	else
		return f;
}



int main()
{
	input();
		
	return 0;
}
