#ifndef C__LAB_1_CLASS_TRAPEZOID_H
#define C__LAB_1_CLASS_TRAPEZOID_H
#include "Class_BrokenLine.h"
#include "Class_Point.h"
#include "Class_ClosedBrokenLine.h"
#include "Class_Polygon.h"


class Trapezoid {
private:
    Polygon trapezoid_;
public:
    Trapezoid(){
        Polygon extrapezoid;
        trapezoid_ = extrapezoid;
    }

    Trapezoid(const Trapezoid& copy){
        trapezoid_ = copy.trapezoid_;
    }

    Trapezoid& operator=(const Trapezoid& right);

    void Print();

    void AddPoint(const Point& a);

    double Perimetr();

    double Area();



};


#endif //C__LAB_1_CLASS_TRAPEZOID_H
