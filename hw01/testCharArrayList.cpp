/*
 *
 *  COMP 15 HW 1 Cheshire ConCATenation - no strings attached
 *
 *  testCharArrayList.cpp
 *
 *  main interface for testing the CharArrayList class 
 *
 *  Written by: Omar Elmady
 *          on: June 5 2022
 */
#include "CharArrayList.h"
#include <iostream>

using namespace std;

int main()
{
    CharArrayList dinner = CharArrayList("dinner", 7);
    dinner.size();
    dinner.print();
    dinner.first();
    dinner.last();
    dinner.elementAt(0);
    dinner.elementAt(6);
    dinner.clear();
    dinner.isEmpty();

    try {

    } catch(const std::exception& e) {
        cout << e.what() << endl;
    }
    return 0;
}
