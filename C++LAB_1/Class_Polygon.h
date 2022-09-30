#ifndef C__LAB_1_CLASS_POLYGON_H
#define C__LAB_1_CLASS_POLYGON_H
#include "Class_BrokenLine.h"
#include "Class_Point.h"
#include "Class_ClosedBrokenLine.h"


class Polygon {
private:
    ClosedBrokenLine polygonLine_;
public:
    Polygon(){
        ClosedBrokenLine exline;
        polygonLine_ = exline;
    }

    void Print();

    void AddPoint(const Point&);

    Polygon(const Polygon& copy){
        polygonLine_ = copy.polygonLine_;
    }

    Polygon& operator=(const Polygon& right);

    double Perimetr();

    double Area();

    Point GetPoint(const int& n);

};



#endif //C__LAB_1_CLASS_POLYGON_H
