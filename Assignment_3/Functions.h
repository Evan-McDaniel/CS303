#pragma once
#include <queue>

using namespace std;

/**
* question 1
* Function that takes front of queue and puts it at the rear
* @param: queue to modify as reference
* @return: nothing
*/
template <typename T>
void move_to_rear(queue<T>& q) {
	T front = q.front();
	q.pop();
	q.push(front);
}

/**
* question 2
* Function that takes a word and determines if its a palindrome
* @param: string to check
* @return: bool-true if word is palindrome
*/
bool isPalindrome(string word, int index = 0) {
	int opp = word.size() - index - 1;
	if (index >= opp) {
		return true;
	}
	if (word[index] != word[opp]) {
		return false;
	}
	return isPalindrome(word, ++index);
}
