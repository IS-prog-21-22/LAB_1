#include "Class_RegularPolygon.h"

RegularPolygon& RegularPolygon::operator=(const RegularPolygon &right) {
    regularpolygon_ = right.regularpolygon_;
}

void RegularPolygon::AddPoint(const Point &a) {
    regularpolygon_.AddPoint(a);
}

void RegularPolygon::Print() {
    regularpolygon_.Print();
}

double RegularPolygon::Perimetr() {
    return regularpolygon_.Perimetr();
}

double RegularPolygon::Area() {
    return regularpolygon_.Area();
}
