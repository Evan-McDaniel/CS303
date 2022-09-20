Program has definition and implementation for Container class. This has an array and several methods for it.
Methods:

  read_file-reads a file with given input. asks for user input and defaults to set input.
  
  check_integer-checks if an integer exists inside the array.
  
  set_value-set the value at a given location in the array.
  
  add-adds a given value to the end of the array.
  
  remove-removes the given index from the array.
  
  and overloaded output operator.
  
The documentation for each of these is in the Container.h header file.
To run the program download the folder from github and run with visual studio.
You will need to provide the name of the file to read from. The given file in the directory is numbers.txt which is what it will default to if an incorrect file is given.
You will need to provide one number which will be used for testing the methods.
This needs to be a valid number.
The other numbers are hard coded in to main for testing.

The program starts by collecting the file name and reading those files into the array. It then outputs the array. Next it gets a number from user. Then it tests the check, set, add, and remove functions and outputs the array after each modification.

Output should look similar to this:
![image](https://user-images.githubusercontent.com/90816235/191148068-7c2aa659-db90-4609-b81c-5b274cf67c35.png)
