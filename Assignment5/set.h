//header files

#include <cstdlib>

#include <iostream>

#pragma once

#ifndef _SET_H_

#define _SET_H_

class set

{

public:

     typedef int value_type;

     typedef std::size_t size_type;

     size_type CAPACITY;

     // postcondition: empty set has been created

    

     //default constructor

     set();

// precondition: if entry is not in the set, then //size() < CAPACITY

     // postcondition: entry is in the set

     void insert(const value_type& entry);

     // postcondition: entry is not in the set

     void deletion(const value_type& entry);

// postcondition: number of elements in the set has //been returned

     size_type size() const;

     // whether entry is in the set has been returned

     bool contains(const value_type& entry) const;

     // postcondition: union of s1 & s2 has been returned

     friend set set_union(const set& s1, const set& s2);

// postcondition: intersection of si & s2 has been //returned

friend set set_intersection(const set& s1, const set& s2);

// postcondition: set consisting of all elements in s1 //that are not in s2

     // has been returned

friend set relative_complement(const set& s1, const set& s2);

// postcondition: contents of s have been set to //output

friend std::ostream& operator<< (std::ostream& output, const set& s);

     //destructor

     ~set();

private:

     // postcondition: location of entry has been returned

     // -1 has been returned in entry is not in the set

     size_type find(const value_type& entry) const;

     void double_capacity();

     value_type *data;

     size_type used;

};

#endif // _SET_H_