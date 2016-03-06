#ifndef QUEUE
#define QUEUE

#include <iostream>

const int QUEUE_CAPACITY = 4;
typedef int QueueElement;

class Queue
{
public:
	Queue();
	bool empty() const;
	void enque(const QueueElement &value);
	QueueElement front() const;
	void dequeue();
	void display(std::ostream &out) const;
private:
	QueueElement myArray[QUEUE_CAPACITY];
	int myFront, myBack;
};

#endif