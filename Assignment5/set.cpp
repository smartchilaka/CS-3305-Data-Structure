

#include "set.h"

#include <cassert>

#include<iostream>

using namespace std;

//default constructor

set::set()

{

     CAPACITY = 30;

     used = 0;

     data = new value_type[CAPACITY];

}

//method to insert the element in the set

void set::insert(const value_type& entry)

{

     if (!contains(entry))

     {

          if (size() == CAPACITY)

          {

              double_capacity();

          }

          data[used] = entry;

          used++;

     }

}

//method to resize the capacity of the set for union

void set::double_capacity()

{

     value_type *newData = new value_type[2 * CAPACITY];

     for (int i = 0; i < used; ++i)

     {

          newData[i] = data[i];

     }

     data = newData;

     CAPACITY *= 2;

}

//method to delete the element in the set

void set::deletion(const value_type& entry)

{

     size_type location = find(entry);

     if (location >= 0)

     {

          data[location] = data[used - 1];

          used--;

     }

}

//method to compute the sie of the set

set::size_type set::size() const

{

     return used;

}

//destructor

set::~set()

{

     //delete the memory

     //delete data;

}

//method to find the location of the element in the set

set::size_type set::find(const value_type& entry) const

{

     size_type location = 0;

     while (location < used && data[location] != entry)

          location++;

     return location;

}

//method to check the element in the set

bool set::contains(const value_type& entry) const

{

     return find(entry) < used;

}

//method to find union

set set_union(const set& s1, const set& s2)

{

     set result;

     for (set::size_type i = 0; i < s1.size(); i++)

          result.insert(s1.data[i]);

     for (set::size_type i = 0; i < s2.size(); i++)

          result.insert(s2.data[i]);

     return result;

}

//method to compute intersection

set set_intersection(const set& s1, const set& s2)

{

     set result;

     for (set::size_type i = 0; i < s1.size(); i++)

     {

          if (s2.contains(s1.data[i]))

              result.insert(s1.data[i]);

     }

     return result;

}

//relative_complement method

set relative_complement(const set& s1, const set& s2)

{

     set result;

     for (set::size_type i = 0; i < s2.size(); i++)

     {

          if (!(s1.contains(s2.data[i])))

              result.insert(s2.data[i]);

     }

     return result;

}

//overloading assinment operator

std::ostream& operator<< (std::ostream& output, const set& s)

{

     for (set::size_type i = 0; i < s.size(); i++)

     {

          output << s.data[i] << " ";

     }

     return output;

}