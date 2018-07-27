/*
Clark Smith
CPSC 2376
July 25, 2018

A program that creates a "ward" of patients and obtains and displays objective data.


*/

#include <iostream>
#include "WardPatient.h"

enum VITALS {
	HEART_RATE,
	RESP_RATE,
	SYS_BP,
	DIA_BP,
	SATS,
	VITAL_COUNT
};

int main() {

	std::string fileName = "vitals.txt";
	enum CHOICE {DISPLAY_VITALS, ADD_VITALS, CHANGE_VITALS, ABNORMAL_REPORT, QUIT};
	//WardPatient patientOne;
	//WardPatient patientTwo("Bob", "White", 2644);   //deleteME, early tests of class

	//patientOne.print();   
	//patientTwo.print();

	WardPatient*** ward;
	ward = new WardPatient**[2];		// ward --> [-->   ][-->  ]
	for (int i = 0; i < 2; ++i) {
		ward[i] = new WardPatient*[8];		// ward--> [-->[*][*][*][*][*][*][*][*] ]
		for (int j = 0; j < 8; ++j) {		//         [-->[*][*][*][*][*][*][*][*] ] 
			ward[i][j] = new WardPatient;
		}									
	}	

	float* tempColumn = nullptr;
	tempColumn = new float[16];

	int** vsTable = nullptr;
	vsTable = new int*[16];
	for (int i = 0; i < 16; ++i) {
		vsTable[i] = new int[5];
		for (int j = 0; j < 5; ++j) {
			vsTable[i][j] = 0;
		}
	}

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
	delete[] tempColumn;

	system("PAUSE");

	return 0;

}