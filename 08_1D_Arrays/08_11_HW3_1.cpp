#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n; // number itself not the index
	
	if (n == 0)
	{
		cout << n << endl; 
	}
	else
	{
		int last_value = 0;
		//int recaman_seq[200] = {0};
		//recaman_seq[0] = 0;
		int recaman_freq[200 + 1] = {0};
		int last_index = 0;
		int value = 0;
		
		//test case: n=13 -> expected output=6
		
		for (int i = 1; i <= 200; i++) //i=1//i=2//i=3//i=4//i=5//i=6
		{
			value = (last_value - i); //value=0-1//value=1-2//value=3-3=0//value=6-4//value=2-5//value=7-6
			
			if (value > 0) //ignore//ignore//ignore//get in//ignore
			{
				if (!(recaman_freq[value])) // if it is NOT repeated
				{
					//recaman_seq[i] = value;
					//last_value = recaman_seq[i];
					last_value = value; //last_value=2
					recaman_freq[last_value]++;
				}
			}
			else  
			{
				//recaman_seq[i] = last_value + i;
				//last_value = recaman_seq[i]; 
				last_value += i; //last_value=0+1//last_value=1+2//last_value=3+3//last_value=2+5
				recaman_freq[last_value]++;//will not be repeated
			}
			
			if (last_value == n)//1!=13//3!=13//6!=13//2!=13//7!=13(get in)
			{
				cout << last_value << " " << i << endl; // prints: 
				break;
			}
		}
	}
	
	return 0;
}