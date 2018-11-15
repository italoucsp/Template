#include "Point.h"
#include <iostream>

using namespace std;

template<class T>
double Point<T>::getx(){
    return x;
}
template<class T>
double Point<T>::gety(){
    return y;
}
template<class T>
void Point<T>::setx(T x){
    this->x = x;
}
template<class T>
void Point<T>::sety(T y){
    this->y = y;
}
