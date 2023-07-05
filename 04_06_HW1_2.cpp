#include <iostream>
using namespace std;

int main()
{
	string student1, student2;
	string id1, id2;
	double grade1, grade2;
	
	cout << "What is student 1's name: ";
	cin >> student1;
	//cout << endl;
	
	cout << "Student 1's id: ";
	cin >> id1;
	//cout << endl;
	
	cout << "Student 1's Math grade: ";
	cin >> grade1;
	//cout << endl;
	
	cout << "What is student 2's name: ";
	cin >> student2;
	//cout << endl;
	
	cout << "Student 2's id: ";
	cin >> id2;
	//cout << endl;
	
	cout << "Student 2's Math grade: ";
	cin >> grade2;
	//cout << endl;
	
	cout << "Students' grades in Math: "
		 << student1 << " (with id " << id1 << ") " << "got grade: " << grade1 << endl
		 << student2 << " (with id " << id2 << ") " << "got grade: " << grade2 << endl
		 << "Average grade is " << (grade1 + grade2) / 2.0 << endl;
		
	
	return 0;
}