// Problem_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Professional.h"
#include "Nonprofessional.h"
#include <cassert>
using namespace std;

static const bool TESTING = true;

int main()
{
    if (TESTING) {
        //Make a type of Professional and test all its functions
        cout << "TESTING FOR PROFESSIONAL EMPLOYEE:\n";
        double pay = 50;
        double hours = 40;
        Professional employee1(pay, hours);
        double salary = employee1.calculateSalary();
        cout << "Employee salary is: " << salary;
        assert(salary == pay * hours);
        double health = employee1.calculateHealthInsurance();
        cout << "\nEmployee health insurance is: " << health;
        assert(health == pay / 5);
        double vacation = employee1.calculateVacation();
        cout << "\nEmployee vacation days is: " << vacation;
        assert(vacation == 15);
        cout << "\n ALL ASSERTIONS PASSED";

        //Make a type Nonprofessional and test all functions
        cout << "\n\nTESTING FOR NONPROFESSIONAL EMPLOYEE:\n";
        pay = 15;
        hours = 20;
        Nonprofessional employee2(pay, hours);
        salary = employee2.calculateSalary();
        cout << "Employee salary is: " << salary;
        assert(salary == pay * hours);
        health = employee2.calculateHealthInsurance();
        cout << "\nEmployee health insurance is: " << health;
        assert(health == pay / 20);
        vacation = employee2.calculateVacation();
        cout << "\nEmployee vacation days is: " << vacation;
        assert(vacation == hours*0.05);
        cout << "\n ALL ASSERTIONS PASSED\n";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
