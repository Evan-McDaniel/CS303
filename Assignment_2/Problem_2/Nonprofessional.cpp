#include "Nonprofessional.h"

double Nonprofessional::calculateVacation() {
	return this->hours * 0.05;
}

double Nonprofessional::calculateHealthInsurance() {
	return this->pay / 20;
}
