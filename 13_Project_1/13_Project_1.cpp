#include <iostream>
#include <string>
using namespace std;

struct patient
{
	string name;
	bool is_urgent; // 1 - 0
	int med_specialization; // 1->20
	
	void print_patient_info()
	{
		cout << name << " ";
		if (is_urgent)
			cout << "Urgent" << endl;
		else
			cout << "Regular" << endl;
			 
	}
	
};

// contains a list of 5 patients for each specializations + no. of registered patients
struct specialization 
{
	patient patients[5 + 1]; // element of index 5 in this array is used as a template for swapping
	int registered_patients;
	
	void initialize_patient(int dum_index, string dum_name, int dum_med_specialization, bool dum_status)
	{
		patients[dum_index].name = dum_name;
		patients[dum_index].med_specialization = dum_med_specialization;
		patients[dum_index].is_urgent = dum_status;
	}
	
	void initialize_registered_patients()
	{
		registered_patients = 0;
	}
	
	void print_patients_in_specialization()
	{
		for (int i = 0; i < registered_patients; i++)
			patients[i].print_patient_info();
	}
	
};

specialization specializations[20 + 1]; // array of specializations

int prompt_message()
{
	int user_choice = -1;
	cout << "\n\n"
		 << "Enter Your Choice:"
		 << "\n";
	
	cout << "1) Add a New Patient" << endl
		 << "2) Print All Patients" << endl
		 << "3) Get Next Patient" << endl
		 << "4) Exit\n" << endl;
	
	cin >> user_choice;

	return user_choice;
}

void add_patient()
{
	int dumDum_specialization;
	string patient_name;
	bool status;
	
	cin >> dumDum_specialization
		>> patient_name 
		>> status;
	
	if (dumDum_specialization > 20 || dumDum_specialization < 1)
	{
		cout << "Invalid Specialization.\n";
		return;
	}
		
	int patient_index = specializations[dumDum_specialization].registered_patients;

	if (status) // is urgent
	{
		// shift all of same specialization on step left
		// to put new urgent patient at the beginning
		// 1 2 3 4 5 -> 1 2 3 5 4 -> 1 2 5 3 4 -> 1 5 2 3 4 -> 5 1 2 3 4 (REJECTED)
		// 1 2 3 4 5 -> 1 2 3 4 4 -> 1 2 3 3 4 -> 1 2 2 3 4 -> 1 1 2 3 4 (Accepted)
		// SHIFT RIGHT
		for (int i = patient_index; i > 0; i--) // swap from the end until you bring the last patient at the beginning to remove him
			specializations[dumDum_specialization].patients[i] = specializations[dumDum_specialization].patients[i - 1];

		specializations[dumDum_specialization].initialize_patient(0, patient_name, dumDum_specialization, true);
	
	}
	else
	{
		if (patient_index >= 5)
		{
			cout << "Sorry. We cannot add more patients to this specialization. \n";
			return;
		}
		else
			specializations[dumDum_specialization].initialize_patient(patient_index, patient_name, dumDum_specialization, false);
	}
	
	if (specializations[dumDum_specialization].registered_patients + 1 <= 5)
		specializations[dumDum_specialization].registered_patients += 1;	
}

void print_patients()
{
	bool is_printed = false;
	
	for (int i = 1; i <= 20; i++) // specialization loop
	{
		if (specializations[i].registered_patients != 0)
		{
			cout << "There is/are " << specializations[i].registered_patients
				 << " patient(s) in specialization "
				 << i << endl;
				 
			specializations[i].print_patients_in_specialization();
			is_printed = true;
		}
	}
	
	if (!(is_printed))
		cout << "No patients in this specialization.\n";
}

void get_next_patient(int dumDum_specialization)
{
	if (specializations[dumDum_specialization].registered_patients > 0) // print next + shift all left
	{
		cout << specializations[dumDum_specialization].patients[0].name
			 << ", please go with the Dr.\n";
				
		// 1 2 3 4 5 -> 1 is gone -> |_| 2 3 4 5 -> 2 3 4 5 5 (make the last element unregistered) + reduce .registered_patients 
		for (int i = 0; i < specializations[dumDum_specialization].registered_patients - 1; i++)
		{
			specializations[dumDum_specialization].patients[i] = specializations[dumDum_specialization].patients[i+1];
		}
		specializations[dumDum_specialization].registered_patients -= 1;
	}
	else // no patients
	{
		cout << "No patients at the moment. Take some rest, Dr.\n";
	}
	
}

int main()
{
	int choice;
	bool is_program_running = true;
	
	for (int i = 1; i < 21; i++)
		specializations[i].initialize_registered_patients();
	
	
	while (is_program_running)
	{
		cin.clear();
		choice = prompt_message();
		switch (choice)
		{
			case (1):
				add_patient();
				break;
			
			case (2):
				print_patients();
				break;
			
			case (3):
				cout << "Enter Specialization: ";
				cin >> choice;
				get_next_patient(choice);
				break;
			
			case (4):
				is_program_running = false;
				break;
			default:
				cout << "Invalid Input!"
					 << "\n"
					 << "Try Again."
					 << endl;
				break;
		}
	}
	
	cout << "What inspired you to enter the medical profession?"
		 << endl
		 << "MONEY!"
		 << endl;
	
	return 0;
}