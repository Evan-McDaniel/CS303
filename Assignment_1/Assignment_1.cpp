#include <iostream>
#include "Container.h"

using namespace std;

int main()
{
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
        catch (...) {
            cout << "Not a valid integer\nTry again: ";
            cin.clear();
            cin.ignore();
            //exit(1);
        }
    }
    cout << check << " is first located at index " << arr.check_integer(check) << "\n";
    int* values = arr.set_value(0, check);
    cout << "setting value at index 0 to " << check << "\n" << arr;
    cout << "Old value: " << values[0] << " New value: " << values[1] << "\n";

    cout << "Adding " << check << " to array\n";
    arr.add(check);
    cout << arr;
    cout << "Removing idex 0 from array \n";
    arr.remove(0);
    cout << arr;

}
