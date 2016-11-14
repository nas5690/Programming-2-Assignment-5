/*Naveed Siddiqui
  Programming II, Assignment 5
  This program will allow a user to input a patient's information
  and view the said information*/


#include"patient.h"
using namespace std;
using namespace PatientData;
#define SIZE 1

Patient pat1;
Person per1;

int main()
{
	int option;
	//Do-while loop. Inside, have switch statements for Cases 1-3
	do
	{
		cout << "What would you like to do today?" << endl;
		cout << "\n\t\t\t 1 - Input Patient Information" << endl;
		cout << "\n\t\t\t 2 - View Patient Information" << endl;
		cout << "\n\t\t\t 3 - Exit" << endl;
		cout << "\n\t\t\t Please Enter HERE -> ";
		cin >> option;
		cin.ignore();

		switch (option)
		{
		case 1: input_data(per1);
			set_data(pat1);
			system("PAUSE");
			system("CLS");
			break;

		case 2:
			per1.Print();
			pat1.print();
			system("PAUSE");
			system("CLS");
			break;
		
		case 3: system("EXIT");
		default: "Error. Please select a valid option (1-3)";
		}

	} while (option != 3);

	
	system("PAUSE");
	return 0;
}
