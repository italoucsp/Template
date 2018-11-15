#include <iostream>
#include "Point.h"
#include "PointArray.h"
#include <math.h>

using namespace std;

int main()
{
    Point<> c(10101,101010);
    Point<> p(1,3);
    Point<> q(3,3);
    Point<> r(3,1);
    Point<> s(9,8);
    Point<> t(8,7);
    Point<> z(5,3);
    Point<> a(94,12);
    Point<> arr[] = {p,q,r};
    int size = sizeof(arr)/sizeof(arr[0]);
    PointArray ps(arr,size);
    PointArray ps2 = ps;
    cout << ps2.getSize() << endl;
    double nel = sqrt(20);
    cout << nel << endl;
    ps2.print();
    cout << '\n';
    ps2.print();
    ps2.push_back(s),ps2.push_back(t),ps2.push_back(a),ps2.push_back(z),ps2.push_back(c);
    cout << '\n';
    ps2.print();
    ps2.insert(2,c);
    cout << '\n';
    ps2.print();
    ps2.remove(4);
    cout << '\n';
    ps2.print();
    return 0;
}
