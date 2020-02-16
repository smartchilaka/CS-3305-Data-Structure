//#pragma once

#ifndef _HEAP_H_

#define _HEAP_H_

#include <iostream>

#include <vector>

#include <cassert>

using namespace std;

// This class implements an unbounded max heap.

template <typename T>

class heap

{

      

public:             

       static const int CAPACITY = 50;

       heap();

       // postcondition: empty heap has been created

       unsigned int size() const;

       // postcondition: number of elements in a heap has been returned

       bool is_empty() const;

       // postcondtion: returned whether the heap is empty

       void insert(const T& item);

       // postcondition: item has been added

       void remove();

       // precondition: heap is not empty

       // postcondition: largest item has been removed from the heap

       T max() const;

       // precondition: heap is not empty

       // postcondition: copy of largest element in the heap has been returned

       T& max();

       // precondition: heap is not empty

       // postcondition: access to largest element in the heap has been returned

       int orderOfMax();

       //return order value of root node

      

private:

       std::vector<T> data;

      

       //order[i] contains the order in which dara[i] was added to the queue

       int order[CAPACITY];

       int count = 0;

       unsigned int max_child(unsigned int index) const;

      

};

//#include "heap.template"

template <typename T>

unsigned int heap<T>::max_child(unsigned int index) const

{

       unsigned int leftChild = index * 2 + 1;

       unsigned int rightChild = index * 2 + 2;

       assert(data.size() > leftChild);

       if (data.size() > rightChild)

       {

              //has two children

              if (data[leftChild] > data[rightChild])

                     return leftChild;

              else

                     return rightChild;

       }

       else

       {

              //has only left child

              return leftChild;

       }

}

template <typename T>

heap<T>::heap()

{

       // empty heap has been created

       count = 0;

}

template <typename T>

unsigned int heap<T>::size() const

{

       return data.size();

}

// postcondtion: returned whether the heap is empty

template <typename T>

bool heap<T>::is_empty() const

{

       if (size() == 0)

              return true;

       return false;

}

// postcondition: item has been added

template <typename T>

void heap<T>::insert(const T& item)

{

       data.push_back(item);

       //the class invariance

       unsigned int childIndex = size() - 1;

       unsigned int parentIndex = (childIndex - 1) / 2;

       //where order[i] contains the order in which data[i] was added to the queue.

       order[childIndex] = ++count;

       if (parentIndex < 0)

              return;

       while (childIndex > 0)

       {

              if (data[parentIndex] < data[childIndex])

              {

                     //order[i] contains the order in which data[i] was added to the queue.

                     int t = order[childIndex];

                     order[childIndex] = order[parentIndex];

                     order[parentIndex] = t;

                     //swap parent and child

                     T tmp = data[parentIndex];

                     data[parentIndex] = data[childIndex];

                     data[childIndex] = tmp;

                    

                     //set chi;d and parent index

                     childIndex = parentIndex;

                     parentIndex = (childIndex - 1) / 2;

              }

              else

              {

                     break;

              }

       }

}

// precondition: heap is not empty

// postcondition: largest item has been removed from the heap

template <typename T>

void heap<T>::remove()

{

       assert(!is_empty());

       if (size() == 1)

       {

              data.erase(data.begin());

              return;

       }

       data[0] = data[data.size() - 1];

       order[0] = order[data.size() - 1];

       //delete max element from heap

       data.erase(data.begin() + data.size() - 1);

       unsigned int parentIndex = 0;

       unsigned int childIndex = 0;

       while (size() > parentIndex * 2 + 1)

       {

              childIndex = max_child(parentIndex);

              if (data[childIndex] > data[parentIndex])

              {

                     //update the order value when delete max fro heap

                     int t = order[childIndex];

                     order[childIndex] = order[parentIndex];

                     order[parentIndex] = t;

                     //swap child and parent

                     T tmp = data[parentIndex];

                     data[parentIndex] = data[childIndex];

                     data[childIndex] = tmp;

                    

                     //set child index

                     parentIndex = childIndex;

              }

              else

              {

                     break;

              }

       }

}

// precondition: heap is not empty

// postcondition: copy of largest element in the heap has been returned

template <typename T>

T heap<T>::max() const

{

       assert(!is_empty());

       return data[0];

}

// precondition: heap is not empty

// postcondition: access to largest element in the heap has been returned

template <typename T>

T& heap<T>::max()

{

       assert(!is_empty());

       return data[0];

}

template <typename T>

int heap<T>::orderOfMax()

{

       assert(!is_empty());

       return order[0];

}

#endif // _HEAP_H_