#include "Employee.h"

double Employee::calculateSalary() {
	return this->pay * this->hours;
}