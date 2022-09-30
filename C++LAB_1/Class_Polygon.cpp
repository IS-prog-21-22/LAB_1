#include "Class_Polygon.h"

void Polygon::Print() {
    polygonLine_.Print();
}

void Polygon::AddPoint(const Point &a) {
    polygonLine_.AddPoint(a);
}

Polygon& Polygon::operator=(const Polygon &right) {
    polygonLine_ = right.polygonLine_;
}

double Polygon::Perimetr() {
    return polygonLine_.Perimetr(polygonLine_);
}

 double Polygon::Area() {
    double sum = 0;
    for (int i = 0; i < polygonLine_.size()-1; i++){
        sum += (polygonLine_.GetPoint(i).GetX() + polygonLine_.GetPoint(i+1).GetX())*(polygonLine_.GetPoint(i).GetY() - polygonLine_.GetPoint(i+1).GetY());
    }
     sum += (polygonLine_.GetPoint(polygonLine_.size()-1).GetX() + polygonLine_.GetPoint(0).GetX())*(polygonLine_.GetPoint(polygonLine_.size()-1).GetY() - polygonLine_.GetPoint(0).GetY());

    double area = sum/2;
    return abs(area);

}

Point Polygon::GetPoint(const int &n) {
    return polygonLine_.GetPoint(n);
}
