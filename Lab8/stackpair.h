#ifndef STACKPAIR_H
#define STACKPAIR_H

template <class T>
class stackpair{
    Public:
    static const int CAPACITY = 30;
    stackpair();
    T pop_a();
    T pop_b();
    void push_a(T item);
    void push_b(T item);
    size_t size_a();
    size_t size_b();
    bool is_empty_a();
    bool is_empty_b();
    is_full_a();
    is_full_b();
    
    private:
    T data[CAPACITY];
    size_t top_A;
    size_t top_B;
}

#include "stackpair.template"
#endif