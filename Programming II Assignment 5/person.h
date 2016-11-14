#pragma once
//use header file to declare any variables
#ifndef PERSON_H
#define PERSON_H

#include<string>
using namespace std;

namespace PatientData {
	class Person
	{
	private:
		string FirstName = " ";
		string LastName = " ";

	public: 
		Person();
		void Print();
		friend void input_data(Person &p); //not member of Person class, but inside due to "friend" status

	};
}

#endif 