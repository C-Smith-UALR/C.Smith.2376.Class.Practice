#include <iostream>
#include <string>
#include "WardPatient.h"


WardPatient::WardPatient() {

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

WardPatient::~WardPatient() {
	std::cout << "Nothing was deleted.";
}

void WardPatient::print() const {
	std::cout << "Name: " << m_lastName << ", " << m_firstName << "\n"
		<< "Last Four: " << m_lastFour << "\n"
		<< "Vital Signs: " << "T " << m_temperature << " HR " << m_heartRate
		<< " RR " << m_respiratoryRate << " BP " << m_systolicBP << "/" << m_diastolicBP
		<< " SaO2 " << m_pulseOx << "%\n\n\n";



}

