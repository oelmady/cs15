#include "IntArrayList.h"
#include <iostream>

using namespace std;

int main(){
    IntArrayList ial1 = IntArrayList(5, 0);

    cout << "initial size: " << ial1.size() << endl;
    cout << "initial capacity: " << ial1.cap() << endl;
    
    ial1.addAtFront(5);
    ial1.addAtBack(1);
    ial1.addAtFront(9);
    
    cout << "contents: "; 
    ial1.print();

    return 0;
}