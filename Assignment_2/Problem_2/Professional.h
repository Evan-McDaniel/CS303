#pragma once
#include "Employee.h"
class Professional : public Employee {
public:
	Professional(const double& pay = 0, const double& hours = 40) : Employee::Employee(pay, hours) {}
	/**
	* Implements calculating vacation
	* @return total vacation days for the employee
	*/
	virtual double calculateVacation();
	/**
	* Implements calculating health insurance
	* @return amount of health insurance for the employee
	*/
	virtual double calculateHealthInsurance();
};

