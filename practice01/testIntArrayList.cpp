#include "IntArrayList.h"
#include <iostream>

using namespace std;

int main(){
    // IntArrayList ial0;
    // cout << "size of ial0: " << ial0.size() << endl;

    IntArrayList ial1 = IntArrayList(3, 0);

    cout << "initial size: " << ial1.size() << endl;
    cout << "initial capacity: " << ial1.cap() << endl;
    
    ial1.addAtFront(1);
    ial1.addAtBack(2);
    ial1.addAtFront(3);

    cout << "contents: "; 
    ial1.print();

    return 0;
}