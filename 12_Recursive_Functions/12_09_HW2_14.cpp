#include <iostream>
#include <string>
using namespace std;

void do_something(int n) //
{
	if (n)
	{
		cout << n % 10;
		do_something(n / 10);
	}
}

int main()
{	
	do_something(123456);
	cout << endl;
	
	return 0;
}

/*
TRACING ASSIGNMENT
1. do_something() prints each digit of the passed number 
   separately; effectively reversing the number in the process.
2. Upon swapping lines 9 & 10:
   do_something() will still print each digit of the passed number
   but they'll be ordered instead; ie, passed number is printed.
*/