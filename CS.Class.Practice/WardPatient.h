#ifndef WARDPATIENT_H
#define WARDPATIENT_H



class WardPatient {

public:
	WardPatient(); //default constructor
	WardPatient(std::string initFirstName, std::string initLastName, int initLastFour);   //another constructor

	~WardPatient(); //destructor

	float getTemp() const;		// getters
	int getHR() const;
	int getRR() const;
	int getSBP() const;
	int getDBP() const;
	int getSats() const;

	void setTemp(float);				// setters
	void setHR(int);
	void setRR(int);
	void setSBP(int);
	void setDBP(int);
	void setSats(int);



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
