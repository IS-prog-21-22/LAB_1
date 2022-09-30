#include "Class_BrokenLine.h"
#include "Class_Point.h"

Point BrokenLine::Getpoint(int n) {
    return Points[n];
}

void BrokenLine::Print(){
    for (int i = 0; i < Points.size(); i++){
        Points[i].Print();
    }
}

void BrokenLine::AddPoint(const Point& a) {
    Points.push_back(a);
}

BrokenLine& BrokenLine::operator=(const BrokenLine& right){
    this->Points = right.Points;
    return *this;
}

int BrokenLine::NumOfPoints(const BrokenLine line) {
    return line.Points.size();
}

double BrokenLine::Perimetr(const BrokenLine &line) const {
    double sum = 0;
    for(int i = 0; i < Points.size() - 1; i++ ){
        sum += line.Points[i].Dist(line.Points[i],line.Points[i+1]);
    }
    return sum;
}

int BrokenLine::size() {
    return Points.size();
}
