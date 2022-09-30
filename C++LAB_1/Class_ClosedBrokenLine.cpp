#include "Class_ClosedBrokenLine.h"
#include "Class_BrokenLine.h"
#include "Class_Point.h"

void ClosedBrokenLine::Print() {
    line_.Print();
}

void ClosedBrokenLine::AddPoint(const Point& a) {
    line_.AddPoint(a);
}

ClosedBrokenLine& ClosedBrokenLine::operator=(const ClosedBrokenLine& right){
    this->line_ = right.line_;
    return *this;
}

double ClosedBrokenLine::Perimetr() {
    double sum;
    sum = 0;
    sum = line_.Perimetr(line_);
    Point p1;
    Point p2;
    p2 = line_.Getpoint(line_.NumOfPoints(line_)-1);
    p1 = line_.Getpoint(0);
    sum += p1.Dist(p1,p2);
    return sum;
}

Point ClosedBrokenLine::GetPoint(const int& n) {
    return line_.Getpoint(n);
}

int ClosedBrokenLine::size() {
    return line_.size();
}
