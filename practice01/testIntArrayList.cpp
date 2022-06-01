#include "IntArrayList.h"
#include <iostream>

using namespace std;

int main(){
    // IntArrayList ial0;
    // cout << "size of ial0: " << ial0.size() << endl;

    IntArrayList ial1 = IntArrayList(4, 0);

    cout << "initial size: " << ial1.size() << " and initial capacity: " << ial1.cap() << endl;
    
    ial1.addAtBack(1); // [0,1]
    ial1.addAtFront(2); // [2,0,1]
    ial1.addAt(1, 3);  // [2,3,0,1]
    ial1.addAt(2, 4); // [2,3,4,0,1,XXX]
    ial1.removeAt(1); // [2,4,0,1]
    int elAt1 = ial1.elementAt(1); // 4
    int indOf1 = ial1.indexOf(elAt1);
    cout << "elementAt: " << indOf1 << " is: " << elAt1 << endl; // 1
    ial1.removeFirstOccurrence(elAt1); // [2,0,1]

/*
    try {
        ial1.removeAt(4);
    } catch (const char* msg) {
     cerr << msg << endl; 
    }
*/
    cout << "contents: "; 
    ial1.print();
    return 0;
}