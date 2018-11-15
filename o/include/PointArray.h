#ifndef POINTARRAY_H
#define POINTARRAY_H
#include "Point.h"

class PointArray
{
    public:
        PointArray();
        PointArray(const Point<> pts[],const int size);
        PointArray(PointArray &o);
        ~PointArray();

        int getSize();
        void print();

        void push_back(const Point<> &p);
        void insert(const int pos,const Point<> &p);
        void remove(const int pos);

    private:
        int size;
        Point<> *points;
        void reSize(int newSize);
};

#endif // POINTARRAY_H
