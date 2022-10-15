#pragma once
#include "Employee.h"
class Nonprofessional : public Employee {
public:
	Nonprofessional(const double& pay = 0, const double& hours = 20) : Employee::Employee(pay, hours) {}
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

