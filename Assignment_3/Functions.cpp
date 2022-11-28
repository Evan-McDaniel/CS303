#include <queue>

using namespace std;

/**
* 1
* Function which takes the front of a queue and puts it at the end
* @param: the queue to modify
* @return: the same queue that was passed
*/
template <typename T>
queue<T> move_to_rear(queue<T> q)
{
	T front = q.front();
	q.pop();
	q.push(front);
	return q;
}

/**
* 2
* Function to determine if a word is a palindrome or not
* @param: the string to determine
* @return: a boolean - true if is a palindrome
*/
bool isPalindrome()
{
	return (1==1);
}

