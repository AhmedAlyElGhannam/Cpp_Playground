#include <iostream>
using namespace std;

int main()
{
	int n, a, b;
	cin >> n >> a >> b;
	int sum = 0;
	int temp;
	int digit_sum;
	for (int i = 1; i <= n; i++)
	{
		temp = i;
		digit_sum = 0;
		while (temp) // temp != 0
		{
			digit_sum += (temp % 10);
			temp /= 10;
		}
		if ((digit_sum >= a) && (digit_sum <= b))
		{
			sum += i;
		}
	}
	
	cout << sum << endl;
	
	return 0;
}