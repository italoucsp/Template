#include <iostream>
#include "Point.h"
#include "Vector.h"

using namespace std;

void swapa(Point &p,Point &q){

    p.print();
    q.print();
    Point temp = p;
    p = q;
    q = temp;
    cout << "cambio..." << endl;
    p.print();
    q.print();
    cout <<'\n';
}

void swaptr(Point *ptr1,Point *ptr2){
    (*ptr1).print();
    (*ptr2).print();
    Point temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    cout << "cambio..." << endl;
    (*ptr1).print();
    (*ptr2).print();
    cout <<'\n';
}
