/*
purpose: to implement a class that improves upon the properties of the linear data structure, akin to arrays
author: omar elmady
may 29 2022
*/
#ifndef INTARRAYLIST_H
#define INTARRAYLIST_H

typedef int ElemType; // the specified Element type for the IntArrayList is... int 

class IntArrayList 
{
public: // interface
    IntArrayList();
    ~IntArrayList();
    IntArrayList(int initialSize, ElemType initialValue);
    
    int size();
    int cap();

    void addAtBack(ElemType el);
    void addAtFront(ElemType el);
    void addAt(int index, ElemType el);
    
    void removeAt(int index);
    void removeFirstOccurrence(ElemType el);
    int indexOf(ElemType el);
    ElemType elementAt(int index);

    void print();

private: // implementation details
    int currSize, capacity; // current and maximum number of elements that can be stored by the IAL
    ElemType *data;
    // a pointer to the heap data
    void doubleCapacity();

};
#endif

/*
function name
purpose
paramaters
return value
Effects: i/o, change of object state, change of other variables 
errors, notes, exceptions, restrictions
*/