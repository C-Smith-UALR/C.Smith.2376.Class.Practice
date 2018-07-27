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
	ward = new WardPatient*[2];		// ward --> [-->   ][-->  ]
	for (int i = 0; i < 2; ++i) {
		ward[i] = new WardPatient[8];   // ward--> [-->[][][][][][][][] ]
	}									//         [-->[][][][][][][][] ] 

	ward[0][0]->setTemp(98.9);

	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 8; ++j) {
			ward[i][j]->print();

		}	
	}
	

	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 8; ++j) {
			delete ward[i][j];
		}
		
	}
	delete[] ward;

	system("PAUSE");

	return 0;

}