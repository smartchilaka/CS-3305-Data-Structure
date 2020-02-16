#include<iostream>
#include "priority_queue.h"
using namespace std;
int main()
{
priority_queue<int> *q = new priority_queue<int>();

//insert element in queue
q->push(3);
q->push(10);
q->push(1);
q->push(30);
q->push(8);
q->push(9);
q->push(16);
q->push(13);

cout << "The max priority element: " << q->top() << endl;
q->pop();
cout << "The max priority element: " << q->top() << endl;
q->pop();
cout << "The max priority element: " << q->top() << endl;
q->pop();
cout << "The max priority element: " << q->top() << endl;
q->pop();
cout << "The new max priority element: " << q->top() << endl;
cout << "size of priority queue: " << q->size() << endl;
//system("pause");
return 0;
}
