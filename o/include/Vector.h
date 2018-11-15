#ifndef VECTOR_H
#define VECTOR_H


class Vector
{
    Point sxy,exy;
    double sx,sy,ex,ey;
    public:
        Vector(Point,Point);
        Vector();
        void offset(int,int);
        void print();
        void modu(Point,Point);
};

#endif // VECTOR_H
