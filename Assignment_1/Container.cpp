#include "Container.h"
#include <iostream>

using namespace std;

void Container::read_file(string fileName) {
	ifstream in(fileName);
	int index = 0;
	while (in && index <= size) {
		try {
			in >> numbers[index];
		}
		catch (exception& e) {
			cerr << "input must be all numbers";
		}
		index++;
	}
	if (index > size + 1) {
		cout << "too many numbers";
	}
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

void Container::set_value(int index, int value) {
	try {
		numbers[index] = value;
	}
	catch (exception& e) {
		cout << "index must be in array";
	}
}

void Container::add(int number) {
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

void Container::remove(int index) {
	int* temp_arr = numbers;
	numbers = new int[size - 1];
	for (unsigned int i = 0; i < size; i++)
	{
		if (i == index)
		{
			continue;
		}
		numbers[i] = temp_arr[i];
	}
	delete[] temp_arr;
	temp_arr = NULL;
	size--;
}

ostream& operator<<(ostream& out, const Container& c) {
	for (unsigned int i = 0; i < c.size; i++)
	{
		cout << c.numbers[i] << " ";
	}
	return out;
}