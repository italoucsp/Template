#ifndef POINTARRAY_H
#define POINTARRAY_H
#include "Point.h"

using namespace std;

template <typename P>
class PointArray
{
    public:
        PointArray();
        PointArray(const Point<P> pts[],const int size);
        PointArray(PointArray &o);
        ~PointArray();

        int getSize();
        void print();

        void push_back(const Point<P> &p);
        void insert(const int pos,const Point<P> &p);
        void remove(const int pos);

    private:
        int size;
        Point<P> *points;
        void reSize(int newSize);
};

template <class P>
PointArray<P>::PointArray()
{
    this ->size = 0;
    this ->points = new Point<P>[size];
}
template <class P>
PointArray<P>::PointArray(const Point<P> pts[],const int size){
    this->size = size;
    this->points = new Point<P>[size];
    for(int i=0;i<size;i++){
        points[i]=pts[i];
    }
}
template <class P>
PointArray<P>::PointArray(PointArray &o){
    this->size = o.size;
    this->points = new Point<P>[o.size];
    for(int i=0;i<size;i++){
        points[i]=o.points[i];
    }
}
template <class P>
PointArray<P>::~PointArray()
{
    delete[] points;
}
template <class P>
int PointArray<P>::getSize(){
    return this ->size;
}
template <class P>
void PointArray<P>::print(){
    for(int i=0;i<size;i++){
        points[i].print();
        //points->print();
    }
}
template <class P>
void PointArray<P>::reSize(int newSize){
    Point<P> *pts = new Point<P>[newSize];
    int minisize = (newSize<size)?size:newSize;
    for(int i=0;i < minisize;i++){
        pts[i] = points[i];
    }
    delete[] points;
    size = newSize;
    points = pts;
}

template <class P>
void PointArray<P>::push_back(const Point<P> &p){
    reSize(size+1);
    points[size-1] = p;

}
template <class P>
void PointArray<P>::insert(const int pos, const Point<P> &p){
    reSize(size+1);
    for(int i=size;i>=pos;i--){
        points[i]=points[i-1];
    }
    points[pos] = p;
}
template <class P>
void PointArray<P>::remove(const int pos){
    for(int i=pos;i<size;i++){
        points[i]=points[i+1];
    }
    reSize(size-1);
}


#endif // POINTARRAY_H
