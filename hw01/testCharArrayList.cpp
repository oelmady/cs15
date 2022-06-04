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
    CharArrayList x = CharArrayList('x');
    x.size();
    x.print();
    x.first();
    x.last();
    x.elementAt(0);
    x.elementAt(0);
    x.clear();
    x.isEmpty();

    try {

    } catch(const exception& e) {
        cout << e.what() << endl;
    }
    return 0;
}
