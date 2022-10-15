#pragma once

class Employee {
public:
	/**
	* Constructor for Employee that takes two optional parameters for the hour and pay attributes. default set to 0
	* @param optionally the amount of pay employee gets
	* @param optionally the number of hours employee works
	* 
	*/
	Employee(const double& pay = 0, const double& hours = 0) : pay(pay), hours(hours) {}
	/**
	* Calculates the weekly salary for all employees
	* @return the pay rate * number of hours worked in week
	*/
	double calculateSalary();
	/**
	* calculates the vacation time for employees. defined in derived classes
	*/
	virtual double calculateVacation() = 0;
	/**
	* calculates the health insurance for employees. defined in derived classes
	*/
	virtual double calculateHealthInsurance() = 0;
	/**
	* @return the pay rate of employee
	*/
	double getWage() const { return pay; }

protected:
	double pay;
	double hours;
};