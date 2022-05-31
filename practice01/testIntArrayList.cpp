#include "IntArrayList.h"
#include <iostream>

using namespace std;

int main(){
    // IntArrayList ial0;
    // cout << "size of ial0: " << ial0.size() << endl;

    IntArrayList ial1 = IntArrayList(4, 0);

    cout << "initial size: " << ial1.size() << " and initial capacity: " << ial1.cap() << endl;
    
    ial1.addAt(0, 1); // [1, 0]
    ial1.addAtBack(2); // [1, 0, 2]
    ial1.addAtFront(3); // [3, 1, 0, 2]
    ial1.removeAt(0);  // [1, 0, 2]
/*
    try {
        ial1.removeAt(4);
    } catch (const char* msg) {
     cerr << msg << endl; 
    }
    cout << "contents: "; 
    ial1.print();
*/
    ial1.~IntArrayList();
    return 0;
}
int main(char)