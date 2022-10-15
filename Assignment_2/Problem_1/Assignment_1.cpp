#include <iostream>
#include "Container.h"

using namespace std;

int main()
{
    try {
        cin.exceptions(ios::failbit);
        //creating an instance
        Container arr;
        //reading the numbers into numbers array
        arr.read_file("numbers.txt");
        cout << arr;
        int check;
        cout << "Enter a number to search for: ";
        while (true) {
            try {
                cin >> check;
                break;
            }
            catch (ios_base::failure& f) {
                cout << "Not a valid integer\nTry again: ";
                cin.clear();
                cin.ignore();
            }
            catch (exception& ex) {
                cerr << "Fatal Error occured in reading value\n";
                cerr << ex.what() << endl;
                abort();
            }
            catch (...) {
                cerr << "Undefined exception occured in reading value\n";
                abort();
            }
        }
        cout << check << " is first located at index " << arr.check_integer(check) << "\n";

        cout << "Enter a number to change a value for: ";
        while (true) {
            try {
                cin >> check;
                break;
            }
            catch (ios_base::failure& f) {
                cout << "Not a valid integer\nTry again: ";
                cin.clear();
                cin.ignore();
            }
            catch (exception& ex) {
                cerr << "Fatal Error occured in reading value\n";
                cerr << ex.what() << endl;
                abort();
            }
            catch (...) {
                cerr << "Undefined exception occured in reading value\n";
                abort();
            }
        }
        int* values = arr.set_value(0, check);
        cout << "setting value at index 0 to " << check << "\n" << arr;
        cout << "Old value: " << values[0] << " New value: " << values[1] << "\n";

        cout << "Enter a number to add to end of array: ";
        while (true) {
            try {
                cin >> check;
                break;
            }
            catch (ios_base::failure& f) {
                cout << "Not a valid integer\nTry again: ";
                cin.clear();
                cin.ignore();
            }
            catch (exception& ex) {
                cerr << "Fatal Error occured in reading value\n";
                cerr << ex.what() << endl;
                abort();
            }
            catch (...) {
                cerr << "Undefined exception occured in reading value\n";
                abort();
            }
        }
        cout << "Adding " << check << " to array\n";
        arr.add(check);
        cout << arr;
        cout << "Removing index 0 from array \n";
        arr.remove(0);
        cout << arr;
    }
    catch (exception e) {
        cout << e.what();
    }

}
