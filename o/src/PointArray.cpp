#include "PointArray.h"
#include "Point.h"
#include <iostream>

PointArray::PointArray()
{
    this ->size = 0;
    this ->points = new Point<int>[size];
}

PointArray::PointArray(const Point<int> pts[],const int size){
    this->size = size;
    this->points = new Point<int>[size];
    for(int i=0;i<size;i++){
        points[i]=pts[i];
    }
}

PointArray::PointArray(PointArray &o){
    this->size = o.size;
    this->points = new Point<int>[o.size];
    for(int i=0;i<size;i++){
        points[i]=o.points[i];
    }
}

PointArray::~PointArray()
{
    delete[] points;
}

int PointArray::getSize(){
    return this ->size;
}

void PointArray::print(){
    for(int i=0;i<size;i++){
        points[i].print();
        //points->print();
    }
   }
void PointArray::reSize(int newSize){
    Point<int> *pts = new Point<int>[newSize];
    int minisize = (newSize<size)?size:newSize;
    for(int i=0;i < minisize;i++){
        pts[i] = points[i];
    }
    delete[] points;
    size = newSize;
    points = pts;
}

void PointArray::push_back(const Point<int> &p){
    reSize(size+1);
    points[size-1] = p;

}

void PointArray::insert(const int pos, const Point<int> &p){
    reSize(size+1);
    for(int i=size;i>=pos;i--){
        points[i]=points[i-1];
    }
    points[pos] = p;
}

void PointArray::remove(const int pos){
    for(int i=pos;i<size;i++){
        points[i]=points[i+1];
    }
    reSize(size-1);
}
