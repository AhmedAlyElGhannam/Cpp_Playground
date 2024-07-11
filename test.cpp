#include<iostream>
using namespace std;
 
void f2(int x) {
	x += 10;
}
int f1(int &x) {
	x++;
	f2(x);
	return 2 * x;
}
int main() {
	int a = 10;
	f1(a);
	cout<<a;
 
	return 0;
}