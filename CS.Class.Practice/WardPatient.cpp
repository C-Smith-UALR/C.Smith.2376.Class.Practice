#include <iostream>
#include <string>
#include "WardPatient.h"


WardPatient::WardPatient() {		//constructor

	m_firstName = "NoFirstName";
	m_lastName = "NoLastName";
	m_lastFour = 0;
	m_temperature = 0.0;
	m_heartRate=0;
    m_respiratoryRate=0;
	m_systolicBP=0;
	m_diastolicBP=0;
	m_pulseOx=0;
}

WardPatient::WardPatient(std::string initFirstName, std::string initLastName, int initLastFour) {    //another constructor
	m_firstName = initFirstName;
	m_lastName = initLastName;
	m_lastFour = initLastFour;
	m_temperature = 0.0;
	m_heartRate = 0;
	m_respiratoryRate = 0;
	m_systolicBP = 0;
	m_diastolicBP = 0;
	m_pulseOx = 0;

}

float WardPatient::getTemp() const {		//getters
	return(m_temperature);

}

int WardPatient::getHR() const {
	return(m_heartRate);
}

int WardPatient::getRR() const {
	return(m_respiratoryRate);
}

int WardPatient::getSBP() const {
	return(m_systolicBP);
}

int WardPatient::getDBP() const {
	return(m_diastolicBP);
}

int WardPatient::getSats() const {
	return(m_pulseOx);
}


void WardPatient::setTemp(float tempToSet) {	//setters
	m_temperature = tempToSet;
}

void WardPatient::setHR(int hrToSet) {
	m_heartRate = hrToSet;
}

void WardPatient::setRR(int rrToSet) {
	m_respiratoryRate = rrToSet;
}

void WardPatient::setSBP(int sbpToSet) {
	m_systolicBP = sbpToSet;
}

void WardPatient::setDBP(int dbpToSet) {
	m_diastolicBP = dbpToSet;
}

void WardPatient::setSats(int satsToSet) {
	m_pulseOx = satsToSet;
}



WardPatient::~WardPatient() {			//destructor
	std::cout << "Nothing was deleted.";
}

void WardPatient::print() const {
	std::cout << "Name: " << m_lastName << ", " << m_firstName << "\n"
		<< "Last Four: " << m_lastFour << "\n"
		<< "Vital Signs: " << "T " << m_temperature << " HR " << m_heartRate
		<< " RR " << m_respiratoryRate << " BP " << m_systolicBP << "/" << m_diastolicBP
		<< " SaO2 " << m_pulseOx << "%\n\n\n";



}

