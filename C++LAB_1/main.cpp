#include <iostream>
#include "Class_Point.h"
//#include "Class_Point.cpp"
#include "Class_BrokenLine.h"
//#include "Class_BrokenLine.cpp"
#include <vector>
#include "Class_ClosedBrokenLine.h"
#include "Class_Polygon.h"
#include "Class_Triangle.h"
#include "Class_Trapezoid.h"
#include "Class_RegularPolygon.h"
using namespace std;

int main() {
    RegularPolygon brok;
    brok.AddPoint(Point(0,0));
    brok.AddPoint(Point(1,4));
    brok.AddPoint(Point(4,4));
    brok.AddPoint(Point(5,0));
    brok.Print();

    std::cout<<brok.Area();
//    polygon.GetPoint(0).Print();
//    polygon.GetPoint(1).Print();
//    polygon.GetPoint(2).Print();
//    std::cout << polygon.Area(polygon);


}
