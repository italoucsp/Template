#include "Point.h"
#include <iostream>

using namespace std;

template<class T, class I>
double Point<T,I>::getx(){
    return x;
}
template<class T, class I>
double Point<T,I>::gety(){
    return y;
}
template<class T, class I>
void Point<T,I>::setx(T x){
    this->x = x;
}
template<class T, class I>
void Point<T,I>::sety(T y){
    this->y = y;
}
