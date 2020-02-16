/*
 * Chinonso Chilaka
 * Lab 3
 * Section 5
 */
//set.cpp
// Declare the required header file
#include "set.h"
#include <cstdlib>
#include <cassert>
#include<iostream>

using namespace std;


    set::set(size_type initial_capacity){ //default constructor for initial capacity
    capacity = initial_capacity;
    used = 0;
    data = new value_type[capacity];
}
   set:: ~set(){  
       capacity = 0;
       used = 0;
       delete data;
   }
    set::set(const set& s){  
        capacity = s.capacity;
        used = s.used;
        data = new value_type[capacity];
        for ( size_type i = 0; i < used; i++)
        {
            data[i] = s.data[i];
    }
    }
    void set::operator= (const set& s){
        used = s.used;
        copy(s.data, s.data + used, data);
    }

    void set::erase(const value_type& target) 
    {
       int pos = -1;
       for (size_type i = 0; i < used; i++)
              if (data[i] == target)
              {
                         pos = i;
                         break;
              }
       for (size_type i = pos; i < used - 1; i++)
              data[i] = data[i + 1];
       used--;
}
    void set::insert(const value_type& entry){ 
        bool found = false;
       for (size_type i = 0; i < used; i++)
              if (data[i] == entry)
              {
                         found = true;
                         break;
              }
       if (!found && used < capacity)
       {
              data[used] = entry;
              used++;
       }
    }
     
    set::size_type set::size() const{
        return used;
    }
    
    bool set::contains(const value_type& target) const{ 
         for (size_type i = 0; i < used; i++)
              if (data[i] == target)
                         return true;
       return false;
    }
    
    std::ostream& operator<<(std::ostream& output, const set& s){ 
        output << "{ ";
       for (size_t i = 0; i < s.size() - 1; i++)
              output << s.data[i] << ", ";
       output << s.data[s.size() - 1] << " }";
       return output;
    }

    void set:: reserve (size_type new_capacity)
    {
if(capacity<=new_capacity)
{
   value_type* temp = new value_type[new_capacity];
    for(size_type i=0; i<used;i++)
    {
        temp[i]=data[i];
    }
    delete[] data;
    data = temp;
}
    }
    

