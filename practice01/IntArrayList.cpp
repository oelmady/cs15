#include "IntArrayList.h"
#include <iostream>
#include <typeinfo>

using namespace std;

// IntArrayList() constructor
// takes no parameters
// returns nothing
// creates a new IAL with no elements and no size
// no side effects 
IntArrayList::IntArrayList(){
    currSize = 0;
    capacity = 0;
    data     = nullptr; // a pointer to the IAL
};

// destructor 
// takes no parameters
// returns nothing 
// destroys the IAL and outputs a message
// no side effects
IntArrayList::~IntArrayList(){
    cout << "Destroying IAL of size " << currSize << " and capacity " << capacity << endl;

    delete [] data;
    data = NULL;
};

// constructor 
// takes as input a size parameter and an initial value for the first element of the IAL
// returns nothing
// creates an ElemType data structure on the heap of capacity initialSize, containing 1 value
// error if the initialValue is not ElemType
IntArrayList::IntArrayList(int initialSize, ElemType initialValue){
    /*
    if (typeid(initialValue) != ElemType) {
        cerr << "invalid input type. Expected: " << typeid(ElemType) << ", got: " << typeid(initialValue) << endl;
        exit(EXIT_FAILURE);
    } */
    capacity = initialSize;
    ElemType *data = new ElemType[capacity];
    data[0] = initialValue;
    currSize = 1;
};

int IntArrayList::size(){
    return this->currSize;
};
int IntArrayList::cap(){
    return this->capacity;
};

void IntArrayList::addAtBack(ElemType el){
    if (currSize >= capacity) {
        doubleCapacity();
    }
    data[currSize] = el;
    currSize++;
};
void IntArrayList::addAtFront(ElemType el){
    if (currSize >= capacity) {
        doubleCapacity();
    }
    // copies each element of the array to an empty index + 1, starting with the index of the last element.
    // [0,  1, 2, 3, X, X, ...]
    // [el, 0, 1, 2, 3, X, ...]
    for (int i = currSize - 1; i >= 0; i--) {
        data[i + 1] = data[i];
    }
    data[0] = el;
    currSize++;
};
void IntArrayList::addAt(int index, ElemType el){
    if (currSize >= capacity) {
        doubleCapacity();
    }
    // moves all elements after index the right
    for (int i = currSize; i > index; i--) {
        data[i + 1] = data[i];
    }
    data[index] = el;
    currSize++;
};

void IntArrayList::removeAt(int index){
    // reduce size by 1
    // move items > index down by 1 
    // [ 0, 1, 2, 3, 4, 5]
    // [0, 2, 3, 4]
    if (index >= currSize) {
        throw range_error("Index out of bounds.");
    }
    
    
    currSize--;
};
void IntArrayList::removeFirstOccurrence(ElemType el){

};

int IntArrayList::indexOf(ElemType el){
    cout << "WIP" << endl;
    return el;
};
ElemType IntArrayList::elementAt(int index){
    cout << "WIP" << endl;
    return index;
};

void IntArrayList::print() {
    for (int i = 0; i < currSize; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
};
// *** IMPLEMENTATION FUNCTIONS ***

void IntArrayList::doubleCapacity(){
    int newCapacity = capacity * 2 + 2;

    // alloc new array in the heap
    ElemType *newArray = new ElemType[newCapacity];

    // copy data to new array
    for (int i = 0; i < size(); i++) {
        newArray[i] = data[i];
    }
    // recylce old array
    delete [] data;
    data = nullptr;

    // update data to point to the new Array
    data = newArray; 

    // update capacity 
    capacity = newCapacity;
}