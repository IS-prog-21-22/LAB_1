#ifndef C__LAB_1_CLASS_REGULARPOLYGON_H
#define C__LAB_1_CLASS_REGULARPOLYGON_H
#include "Class_BrokenLine.h"
#include "Class_Point.h"
#include "Class_ClosedBrokenLine.h"
#include "Class_Polygon.h"

class RegularPolygon {
private:
    Polygon regularpolygon_;
public:
    RegularPolygon(){
        Polygon exregularpolygon;
        regularpolygon_ = exregularpolygon;
    }

    RegularPolygon(const RegularPolygon& copy){
        regularpolygon_ = copy.regularpolygon_;
    }

    RegularPolygon& operator=(const RegularPolygon& right);

    void Print();
    void AddPoint(const Point& a);

    double Perimetr();

    double Area();
};


#endif //C__LAB_1_CLASS_REGULARPOLYGON_H
