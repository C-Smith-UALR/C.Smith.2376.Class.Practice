/*
Clark Smith
CPSC 2376
July 25, 2018

A program that creates a "ward" of patients and obtains and displays objective data.


*/

#include <iostream>
#include "WardPatient.h"

int main() {

	WardPatient patientOne;
	WardPatient patientTwo("Bob", "White", 2644);

	patientOne.print();   
	patientTwo.print();

	WardPatient** ward;
	ward = new WardPatient*[16];
	for (int i = 0; i < 16; ++i) {
		ward[i] = new WardPatient;
	}

	ward[5]->setTemp(98.6);
	for (int i = 0; i < 16; ++i) {
		ward[i]->print();
	}
	

	for (int i = 0; i < 16; ++i) {
		delete ward[i];
	}
	delete[] ward;

	system("PAUSE");

	return 0;

}