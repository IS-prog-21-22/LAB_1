#ifndef C__LAB_1_CLASS_BROKENLINE_H
#define C__LAB_1_CLASS_BROKENLINE_H
#include "Class_Point.h"
#include <iostream>
#include <vector>
class BrokenLine{
private:
    std::vector<Point> Points;
public:
    BrokenLine(){
        std::vector<Point> temp;
        Points = temp;
    }

    BrokenLine(const BrokenLine &copy){
        Points = copy.Points;
    }

    Point Getpoint(int n);

    void Print();
    void AddPoint(const Point&);

    BrokenLine& operator=(const BrokenLine& right);

    int NumOfPoints(BrokenLine);

    double Perimetr(const BrokenLine& line) const;

    int size();


};


#endif //C__LAB_1_CLASS_BROKENLINE_H
