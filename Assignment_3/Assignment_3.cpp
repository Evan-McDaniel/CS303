// Assignment_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Functions.h"

using namespace std;


int main()
{
    //testing function 1
    cout << "testing the function for question 1:\n";
    queue<int> q;
    cout << "pushed 1 to queue\n";
    q.push(1);
    cout << "pushed 2 to queue\n";
    q.push(2);
    cout << "pushed 3 to queue\n";
    q.push(3);
    cout << "Front of Q is: " << q.front() << endl;
    cout << "rear of Q is: " << q.back() << endl;
    cout << "running function\n";
    move_to_rear(q);
    cout << "Front of Q is: " << q.front() << endl;
    cout << "rear of Q is: " << q.back() << endl;

    //testing function 2
    cout << "\ntesting function for question 2:\n";
    string word = "hello";
    cout << "testing " << word << ": ";
    cout << isPalindrome(word);
    word = "level";
    cout << "\ntesting " << word << ": ";
    cout << isPalindrome(word) << endl;
    word = "h";
    cout << "testing " << word << ": ";
    cout << isPalindrome(word) << endl;
    word = "racecar";
    cout << "testing " << word << ": ";
    cout << isPalindrome(word) << endl;
    word = "test";
    cout << "testing " << word << ": ";
    cout << isPalindrome(word) << endl;
    word = "";
    cout << "testing " << word << ": ";
    cout << isPalindrome(word) << endl;

    //Question 5
    cout << "\nQuestion 5:\n";
    map<string, string> stateDataMap;
    cout << "creating map and adding entries\n";
    stateDataMap["Nebraska"] = "Lincoln";
    stateDataMap["New York"] = "Albany";
    stateDataMap["Ohio"] = "Columbus";
    stateDataMap["California"] = "Sacramento";
    stateDataMap["Massachusetts"] = "Boston";
    stateDataMap["Texas"] = "Austin";
    cout << "Running map to_string method\n";
    to_string(stateDataMap);
    stateDataMap["California"] = "Los Angeles";
    cout << "changed capital of CA to Los Angeles\n";
    to_string(stateDataMap);
    cout << "enter a state to search for the capital: ";
    string state;
    cin >> state;
    cout << "Searching capital for " << state << endl;
    getCapitalName(stateDataMap, state);
}

