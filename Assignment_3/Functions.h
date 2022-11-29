#pragma once
#include <queue>

using namespace std;

template <typename T>
void move_to_rear(queue<T>& q) {
	T front = q.front();
	q.pop();
	cout << "hello";
	q.push(front);
}
