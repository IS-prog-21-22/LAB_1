#ifndef C__LAB_1_CLASS_CLOSEDBROKENLINE_H
#define C__LAB_1_CLASS_CLOSEDBROKENLINE_H
#include "Class_BrokenLine.h"
#include "Class_Point.h"


class ClosedBrokenLine {
private:
    BrokenLine line_;
public:
    ClosedBrokenLine(){
        BrokenLine exline;
        line_ = exline;
    };

    void Print();

    ClosedBrokenLine(const ClosedBrokenLine& copy){
        line_ = copy.line_;
    }

    void AddPoint(const Point&);

    ClosedBrokenLine& operator=(const ClosedBrokenLine& right);

    double Perimetr();

    Point GetPoint(const int& n);

    int size();


};


#endif //C__LAB_1_CLASS_CLOSEDBROKENLINE_H
