#ifndef C__LAB_1_CLASS_TRIANGLE_H
#define C__LAB_1_CLASS_TRIANGLE_H
#include "Class_BrokenLine.h"
#include "Class_Point.h"
#include "Class_ClosedBrokenLine.h"
#include "Class_Polygon.h"

class Triangle {
private:
    Polygon triangle;
public:
    Triangle(){
        Polygon expolygon;
        triangle = expolygon;
    }

    Triangle(const Triangle& copy){
        triangle = copy.triangle;
    }

    Triangle& operator=(const Triangle& right);

    void AddPoint(const Point&);

    void Print();

    double Perimetr();

    double Area();

};


#endif //C__LAB_1_CLASS_TRIANGLE_H
