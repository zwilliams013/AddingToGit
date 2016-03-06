#include <iostream>
#include "Queue.h"

using namespace std;

int main()
{
	Queue Q;

	Q.front();
	int no;

	Q.enque(56);
	Q.display(cout);
	Q.front();

	Q.enque(121);
	//Q.enque(300);
	Q.enque(300);

	cout << Q.empty() << endl;
	Q.display(cout);
}