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
    cout << "running function\n";
    move_to_rear(q);
    cout << "Front of Q is: " << q.front() << endl;

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
}

