#ifndef WARDPATIENT_H
#define WARDPATIENT_H



class WardPatient {

public:
	WardPatient(); //default constructor
	~WardPatient(); //destructor
	void print() const;










private:
	std::string m_firstName;
	std::string m_lastName;
	int m_lastFour;   //last 4 digits of SSN
	float m_temperature;
	int m_heartRate;
	int m_respiratoryRate;
	int m_systolicBP;
	int m_diastolicBP;
	int m_pulseOx;








};




#endif
