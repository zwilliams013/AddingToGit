#include <iostream>
#include "Queue.h"
using namespace std;

Queue::Queue(): myFront(0), myBack(0){}

bool Queue::empty() const 
{
	return (myFront == myBack);
}

void Queue::enque(const QueueElement &value)
{
	int newBack = (myBack + 1) % QUEUE_CAPACITY;
	if (newBack != myFront)									//queue isn't full
	{
		myArray[myBack] = value;
		myBack = newBack;
	}
	else
	{
		cerr << "Queue full -- can't add new value\n"
				"Must increase value of \n ";
		exit(1);
	}
}

QueueElement Queue::front() const
{
	if ( !empty() )
	{
		return (myArray[myFront]);
	}
	else
	{
		cerr << "*** Queue is empty -- returning garbage value ***\n";
		QueueElement garbage = (QueueElement)NULL;
		return garbage;
	}
}

void Queue::dequeue()
{
	if ( !empty() )
	{
		myFront = (myFront + 1) % QUEUE_CAPACITY;
	}
	else
	{
		cerr << "*** Queue is empty -- "
			"can't remove a value ***\n";
		exit(1);
	}
}

void Queue::display(std::ostream &out) const
{
	for (int i = myFront; i != myBack; i = (i + 1) % QUEUE_CAPACITY)
	{
		out << myArray[i] << " ";
	}
	cout << endl;

}

