#include "Container.h"
#include <iostream>

using namespace std;

void Container::read_file(string fileName) {
	cout << "Enter a file name to read (numbers.txt for default): ";
	string file;
	cin >> file;
	//cout << "Reading " << fileName << " into array\n";
	ifstream in;
	in.exceptions(ios::failbit);
	try {
		in.open(file);
	}
	catch (exception& e) {
		cout << "Could not open file..using "<< fileName << " instead\n";
		in.clear();
		in.open(fileName);
	}
	int index = 0;
	while (in && index < size) {
		try {
			in >> numbers[index];
		}
		catch (exception& e) {
			cerr << "ERROR: input must be all numbers\n";
			cerr << e.what() << "\n";
			exit(1);
		}
		index++;
	}
	if (index > size + 1) {
		cout << "too many numbers\n";
	}
	in.close();
}

int Container::check_integer(int number) {
	if (number >= 0 && number <= size) {
		for (unsigned int i = 0; i < size; i++)
		{
			if (numbers[i] == number) {
				return i;
			}
		}
	}
	return -1;
}

int* Container::set_value(int index, int value) {
	try {
		if (index < 0 || index > this->size) {
			throw exception("Index is out of bounds for array");
		}
		int temp = numbers[index];
		numbers[index] = value;
		int* nums = new int[2];
		nums[0] = temp;
		nums[1] = value;
		return nums;
	}
	catch (exception e) {
		throw e;
	}
}

void Container::add(int number) {
	try {
		int* temp_arr = numbers;
		numbers = new int[size + 1];
		for (unsigned int i = 0; i < size; i++)
		{
			numbers[i] = temp_arr[i];
		}
		numbers[size] = number;
		delete[] temp_arr;
		temp_arr = NULL;
		size++;
	}
	catch (exception e) {
		throw;
	}
}

void Container::remove(int index) {
	int* temp_arr = numbers;
	bool found = false;
	numbers = new int[size - 1];
	for (unsigned int i = 0; i < size; i++)
	{
		if (i == index)
		{
			found = true;
		}
		if (!found) {
			numbers[i] = temp_arr[i];
		}
		else {
			numbers[i] = temp_arr[i + 1];
		}
	}
	delete[] temp_arr;
	temp_arr = NULL;
	size--;
}

ostream& operator<<(ostream& out, const Container& c) {
	cout << "outputting the numbers array of the instance...\n";
	for (unsigned int i = 0; i < c.size; i++)
	{
		cout << c.numbers[i] << " ";
	}
	cout << "\n";
	return out;
}
