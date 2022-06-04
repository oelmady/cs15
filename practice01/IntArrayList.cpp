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
};

// constructor 
// takes as input a size parameter and an initial value for the first element of the IAL
// returns nothing
// creates an ElemType data structure on the heap of capacity initialSize, containing 1 value
// error if the initialValue is not ElemType
IntArrayList::IntArrayList(int initialSize, ElemType initialValue){
 
    capacity = initialSize;
    currSize = 1;
	data     = new ElemType[capacity];
    data[0]  = initialValue;
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

    // moves all elements after index to the right
    for (int i = currSize - 1; i >= index; i--) {
        data[i + 1] = data[i];
    }
    data[index] = el;
    currSize++;
};


// function removeAt
// removes an element at an index and shifts elements to leave no empty indices between them
// takes in an index to remove
// returns nothing 
// decrements currSize by 1
// throws error if index is out of bounds of array elements
// [ 0, 1, 2, 3, 4, X] -> [0, 2, 3, 4, X, X]
void IntArrayList::removeAt(int index){
    if (index >= currSize) {
        throw range_error("Input index out of bounds.");
    }
    ElemType* newArray = new ElemType[capacity];
    for (int i = 0; i < currSize; i++) {
        if (i >= index) {
            newArray[i] = data[i + 1];
        }
        else {
            newArray[i] = data[i];
        }
    }
    delete [] data;
    data = newArray;
	currSize--;
};

// function removeFirstOccurrence
// removes the first occurrence of a given element from the data and shifts the array to leave no empty spaces
// takes an element as parameter
// returns nothing 
// decrements currSize by 1
// does nothing if the element is not present
// is type-safe and bounds safe
void IntArrayList::removeFirstOccurrence(ElemType el){
    for (int i = 0; i < currSize; i++) {
        if (data[i] == el) {
            removeAt(i);
            return;
        }
    }
};


// function indexOf
// takes as input an element to find in the array
// returns the first index of data matching the element parameter if found; otherwise -1
// no effects or errors 
int IntArrayList::indexOf(ElemType el){
    for (int i = 0; i < currSize; i++) {
        if (data[i] == el) {
            return i;
        }
    }   
    return -1;
};

// function elementAt takes an index as a parameters and returns the element at the index specified if it is within bounds; otherwise throws a range_error
ElemType IntArrayList::elementAt(int index){
	if (index >= currSize) {
		throw range_error("Index out of bounds");
	}
	return data[index];
};


// function print takes no arguments and prints the elements of the array on a single line with spaces
// returns nothing and causes no effects on data
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

    // update data to point to the new Array
    data = newArray; 

    // update capacity 
    capacity = newCapacity;
}