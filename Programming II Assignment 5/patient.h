#pragma once
//use header to declare any variables
#ifndef PATIENT_H 
#define PATIENT_H
#include"person.h"
#include<iostream>
namespace PatientData {

	class Patient :public Person
	{
	private:
		int ID = 0;
	public:
		Patient();
		int get_ID();
		void print();
		friend void set_data(Patient &p);
	};
}

#endif 