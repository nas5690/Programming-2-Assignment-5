//use .cpp file to define any variables

#include "patient.h"
using namespace std;
namespace PatientData {
	Patient::Patient()
	{}

	int Patient::get_ID()
	{
		return ID;
	}

	void Patient::print()
	{
		
		cout << "Patient ID: " << this->ID << endl;
	}

	void set_data(Patient &p)
	{
		cout << "Enter the ID: ";
		cin >> p.ID;
		cin.ignore();
	}
}