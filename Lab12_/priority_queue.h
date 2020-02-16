//#pragma once

#ifndef _PRIORITY_QUEUE_H

#define _PRIORITY_QUEUE_H

#include "heap.h"

using namespace std;

template <typename T>

class priority_queue

{

     

public:

      priority_queue();

      // postcondition: empty priority_queue has been created

      void pop();

      // precondition: priority_queue is not emtpy

      // postcondition: highest priority item has been removed

      void push(const T& item);

      // postcondition: item has been inserted

      bool empty() const;

      // postcondition: returned whether priority queue is empty

      unsigned int size() const;

      // postcondition: returned number of items in the priority queue

      T top() const;

      // precondition: priority queue is not empty

      // postcondition: copy of highest priority item has been returned

      int orderOfTop();

private:

      heap<T> h;

};

//#include "priority_queue.template"

// postcondition: empty priority_queue has been created

template <typename T>

priority_queue<T>::priority_queue() : h()

{

}
// postcondition: highest priority item has been removed
template <typename T>
void priority_queue<T>::pop()
{
      assert(!empty());// priority_queue is not emtpy
      h.remove();
}
// postcondition: item has been inserted
template <typename T>
void priority_queue<T>::push(const T& item)
{
      if (h.CAPACITY == h.size())
      {
            cout << "Queue full!" << endl;
            return;
      }
      h.insert(item);
}
// postcondition: returned whether priority queue is empty
template <typename T>
bool priority_queue<T>::empty() const
{
      return h.is_empty();
}
// postcondition: returned number of items in the priority queue
template <typename T>
unsigned int priority_queue<T>::size() const
{
      return h.size();
}
// precondition: priority queue is not empty
// postcondition: copy of highest priority item has been returned
template <typename T>
T priority_queue<T>::top() const
{
      return h.max();
}
template <typename T>
int priority_queue<T>::orderOfTop()
{
      return h.orderOfMax();
}
#endif // _PRIORITY_QUEUE_H