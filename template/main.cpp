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
    PointArray<Point<int> > ps(arr,size);
    PointArray<Point<int> > ps2 = ps;

    Point<float> ss(1.2,3.4);
    Point<float> ff(5.0,8.8);
    Point<float> dd(1.2,3.7);
    Point<float> zz(0.2,7.9);
    Point<float> aa(10.20,32.4);
    Point<float> bb(2.5,9.4);
    Point<float> arr2[]={ss,dd,ff};
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    PointArray<Point<float> >  psf1(arr2,size2);
    PointArray<Point<float> >  psf=psf1;

    cout << "Enteros:   " << endl;

    cout << ps2.getSize() << endl;
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
    cout << "Flotantes:   " << endl;
    cout << psf.getSize() << endl;
    psf.push_back(zz),psf.push_back(aa),psf.push_back(dd);
    psf.print();
    cout << '\n';
    psf.insert(5,bb);
    psf.print();
    cout << '\n';
    psf.remove(4);
    psf.print();
    cout << '\n';
    return 0;
}
