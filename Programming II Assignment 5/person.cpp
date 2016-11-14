//use .cpp to define any variables

#include "patient.h"
using namespace std;
namespace PatientData {

	Person::Person()
	{}

	void Person::Print()
	{
		cout << "Patient First Name: " << this->FirstName << endl;
		cout << "Patient Last Name: " << this->LastName << endl;
	}

	void input_data(Person &p)
	{
		cout << "Please enter your first name: ";
		getline(cin, p.FirstName);
		cout << "Please enter your last name: ";
		getline(cin, p.LastName);
	}
}