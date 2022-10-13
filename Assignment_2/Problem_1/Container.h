#ifndef Container_H_
#define Container_H_
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


class Container {
public:
	/**
	* Constructors for initialization of Container class
	* @param size for initialization of Container
	*/
	Container(int size) : size(size), numbers(new int[size]) {}
	Container() : size(DEFAULT_SIZE), numbers(new int[DEFAULT_SIZE]) {}

	void read_file(string fileName);

	/**
	* checks if a number exists in array
	* @param number to check if exists in array
	* @return the index if the number is in the array or -1 if it is not
	*/
	int check_integer(int number);

	/**
	* sets the value at specified index
	* @param the index in the array to change
	* @param the value to change it to
	* @return the old value and new value
	*/
	int* set_value(int index, int value);

	/**
	* adds the number to the end of array
	* @param adds the number to the end of the array
	*/
	void add(int number);

	/**
	* removes an item from the array at a specified index
	* @param takes index to remove in array
	*/
	void remove(int index);
	/**
	* to output the numbers array
	* @param an instance of Container
	* @param an ostrea
	* @return the same ostream that was passed
	*/
	friend ostream& operator<<(ostream&, const Container&);

private:
	int size;
	int* numbers;
	const static int DEFAULT_SIZE = 100;
};
#endif