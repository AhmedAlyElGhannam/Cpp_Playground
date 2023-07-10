#include <iostream>
#include <string>
using namespace std;

int main()
{
	int max_employee_num = 50;
	string employee_name[max_employee_num] = {"0"};
	int employee_age[max_employee_num] = {0};
	int employee_salary[max_employee_num] = {0};
	char employee_gender[max_employee_num] = {0};	
	int employee_counter = 0;
	int choice;
	while (true)
	{
		cout << "Enter your choice: "
			 << "\n"
			 << "1) Add new employee"
			 << "\n"
			 << "2) Print all employees"
			 << "\n"
			 << "3) Delete by age"
			 << "\n"
			 << "4) Update salary by name"
			 << endl;
		cin >> choice;
		switch (choice)
		{
			case (1): // add new employee
				cout << "Enter name: ";
				cin >> employee_name[employee_counter];
				cout << endl;
				cout << "Enter age: ";
				cin >> employee_age[employee_counter];
				cout << endl;
				cout << "Enter salary: ";
				cin >> employee_salary[employee_counter];
				cout << endl;
				cout << "Enter gender (M/F): ";
				cin >> employee_gender[employee_counter];
				cout << endl;
				employee_counter++;
				break;
			case (2): // print all employees
				for (int i = 0; i < employee_counter; i++)
				{
					cout << employee_name[i]   << " "
						 << employee_age[i]    << " "
						 << employee_salary[i] << " "
						 << employee_gender[i] << " "
						 << endl;
				}
				break;	
			case (3): // delete by age
				int start_age, end_age;
				cout << "Enter start and end age" << endl;
				cin >> start_age >> end_age;
				for (int i = 0; i < employee_counter; i++)
				{
					if ((employee_age[i] >= start_age) && (employee_age[i] <= end_age))
					{
						employee_name[i] = "0";
						employee_age[i] = 0;
						employee_salary[i] = 0;
						employee_gender[i] = 0;
						
					}
				}
				employee_counter--;
				for (int i = 0; i < max_employee_num; i++)
				{
					if (employee_age[i] == 0)
					{
						for (int j = i; j < max_employee_num; j++)
						{
							if (employee_age[j] != 0)
							{
								employee_name[i] = employee_name[j];
								employee_age[i] = employee_age[j];
								employee_salary[i] = employee_salary[j];
								employee_gender[i] = employee_gender[j];
							}
						}
					}
				}
				break;
			case (4):
				string name_temp;
				int salary_temp;
				cout << "Enter name and salary: ";
				cin >> name_temp >> salary_temp;
				for (int i = 0; i < employee_counter; i++)
				{
					if (name_temp == employee_name[i])
					{
						employee_salary[i] = salary_temp;
						break;
					}
				}
				break;
		}
	}
	return 0;
}