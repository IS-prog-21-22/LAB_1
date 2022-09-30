#include "Class_Triangle.h"

Triangle& Triangle::operator=(const Triangle &right) {
    triangle = right.triangle;
}

void Triangle::AddPoint(const Point& a) {
    triangle.AddPoint(a);
}

void Triangle::Print() {
    triangle.Print();
}

double Triangle::Perimetr() {
    return triangle.Perimetr();
}

double Triangle::Area() {
    return triangle.Area();
}
