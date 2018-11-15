#include <iostream>
#include "Point.h"
#include "PointArray.h"
#include <math.h>

using namespace std;

int main()
{
    Point<int> c(10101,101010);
    Point<int> p(1,3);
    Point<int> q(3,3);
    Point<int> r(3,1);
    Point<int> s(9,8);
    Point<int> t(8,7);
    Point<int> z(5,3);
    Point<int> a(94,12);
    Point<int> arr[] = {p,q,r};
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
