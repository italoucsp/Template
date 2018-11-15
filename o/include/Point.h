#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;

template <typename T = double, typename I = int>
class Point
{
    public:
        Point();
        Point(T, T);
        Point(Point &o);

        void offset(I,I);
        void print();
        double getx();
        double gety();
        void setx(T x);
        void sety(T y);
    private:
        T x,y;
};

template<class T, class I>
Point<T,I>::Point()
{
    x = 0;
    y = 0;
}
template<class T, class I>
Point<T,I>::Point(T tx, T ty){
    x = tx;
    y = ty;
}
template<class T, class I>
Point<T,I>::Point(Point &o){
    x = o.x;
    y = o.y;
}
template<class T, class I>
void Point<T,I>::offset(I nx,I ny){
    x += nx;
    y += ny;
}
template<class T, class I>
void Point<T,I>::print(){
    cout << "(" << x << "," << y << ")" << endl;
}

#endif // POINT_H
