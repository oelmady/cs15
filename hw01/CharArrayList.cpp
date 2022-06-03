/*
 *
 *  COMP 15 HW 1 Cheshire ConCATenation - no strings attached
 *
 *  CharArrayList.cpp
 *
 *  function definitions for the implementation of the CharArrayList class 
 *
 *  Modified by: Omar Elmady
 *           On: June 5 2022
 *
 */

#include "CharArrayList.h"
#include <iostream>

using namespace std;

// default constructor takes no parameters and initializes an empty array list with capacity 0;
CharArrayList::CharArrayList(){
    length = 0;
    data   = nullptr;
};
// a constructor taking in a single char as a parameter and creates a one-element array list consisting of that character, with capacity 1
CharArrayList::CharArrayList(char c){
    length = 1;
    char* data = new char[length];
    data[0] = c;
};
// a constructor taking an array of characters (or equivalently a pointer to a char array, or string) and the integer length of the array, and creates an array list containing the characters of the array with an initial capacity equal to the length of the array that was passed in.
CharArrayList::CharArrayList(char* arr, int len){
    length     = len;
    char* data = new char[length];
    for (int i = 0; i < length; i++) {
        data[i] = arr[i];
    }
};

// A copy constructor for the class that makes a deep copy of a given instance.
// initialized T a = b, where b is of class T
CharArrayList::CharArrayList(const CharArrayList& copy){
    length = copy.length;
    char* data = new char[length];
    for (int i = 0; i < copy.length; i++) {
        data[i] = copy[i];
    }
};

// a destructor that destroys/deletes/recycles all heap-allocated data in the cur- rent array list. It has no parameters and returns nothing.
CharArrayList::~CharArrayList(){
    data = nullptr;
    data = NULL;
};

//an assignment operator for the class that recycles the storage associated with the instance on the left of the assignment and makes a deep copy of the instance on the right hand side into the instance on the left hand side.
CharArrayList::CharArrayList& operator=(const CharArrayList& rhs){
    int copyLen = rhs.size();
    char* lhs = new char[copyLen];
    for (int i = 0; i < copyLen; i++) {
        lhs[i] = rhs[i];
    }

    delete [] data;

    data = lhs;
};

//isEmpty function that takes no parameters and returns a boolean value that is true if this specific instance of the class is empty (has no characters) and false otherwise.
bool CharArrayList::isEmpty(){
    return this->data == nullptr;
};

//clear function that takes no parameters and has a void return type. It makes the instance into an empty array list. For example if you call the clear function and then the isEmpty function the isEmpty function should return true.
void CharArrayList::clear(){
    char* emptyArr = new char[0];
    delete [] data;
    data = emptyArr;
};

//size function that takes no parameters and returns an integer value that is the number of characters in the array list. 
int CharArrayList::size(){
    return length;
};

// first function that takes no parameters and returns the first element (char) in the array list. If the array list is empty it will throw a runtime_error exception with the message “cannot get first of empty ArrayList”.
char CharArrayList::first(){
    return data[0];
};

//last function that takes no parameters and returns the last element (char) in the array list. If the array list is empty it throws a std::runtime_error exception with the message “cannot get last of empty ArrayList”.
char CharArrayList::last(){
    if (length == 0) {
        throw runtime_error("cannot get last of empty ArrayList");
    }
    return data[length - 1];
};

//elementAt function that takes an integer index and returns the element (char) in the array list at that index. 
char CharArrayList::elementAt(int index){
    if (index >= length) {
        throw range_error("index out of bounds");
    }
    return data[index];
};

// a function that takes no parameters and returns nothing. prints 
//[CharArrayList of size n <<content>>]
void CharArrayList::print(){
    cout << "[CharArrayList of size " << size();
    cout << " <<";
    for (int i = 0; i < length; i++) {
        cout << data[i];
    }
    cout << ">>]";
};

//pushAtBack function that takes an element (char) and has a void return type. It inserts the given new element after the end of the existing elements of the array list.
void CharArrayList::pushAtBack(char c){


};

//pushAtFront function that takes an element (char) and has a void return type. It inserts the given new element in front of the existing elements of the array list.
void CharArrayList::pushAtFront(char c){


};

//insertAt function that takes an element(char) and an integer index as parameters and returns nothing. It inserts the new element at the specified index and shifts the existing elements.
void CharArrayList::insertAt(char c, int index){


};

//insertInOrder function that takes an element (char), inserts it into the array list in alphabetical order, and returns nothing. the function inserts the element at the first index after which some greater character occurs.
void CharArrayList::insertInOrder(char c){


};

//popFromFront function that takes no parameters and has a void return type. It removes the first element from the list. If the list is empty it should throw a std::runtime_error exception with message “cannot pop from empty ArrayList”.
void CharArrayList::popFromFront(){


};

//popFromBack function that takes no parameters and has a void return type. It removes the last element from the list. If the list is empty it should throw an std::runtime_error exception initialized with message “cannot pop from empty ArrayList”.
void CharArrayList::popFromBack(){


};

//removeAt function that takes an integer index and has a void return type. It removes the element at the specified index. If the index is out of range it should throw a std::range_error exception with message “index (IDX) not in range [0..SIZE)”,
void CharArrayList::removeAt(int index){


};

//replaceAtfunctionthattakesanelement(char)andanintegerindexasparameters and has a void return type. It replaces the element at the specified index with the new element. If the index is out of range it should throw a std::range_error exception with message “index (IDX) not in range [0..SIZE)”,
void CharArrayList::replaceAt(char c, int index){


};

//concatenate function that takes a pointer to a second CharArrayList and has a void return type. It adds a copy of the array list pointed to by the parameter value to the end of the array list the function was called from. 
void CharArrayList::concatenate(CharArrayList * cat){


};

//shrink() function that takes no parameters and has a void return type. it reduces the size of the array to free all unused memory.
void CharArrayList::shrink(){


};