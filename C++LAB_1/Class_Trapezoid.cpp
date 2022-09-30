#include "Class_Trapezoid.h"

Trapezoid& Trapezoid::operator=(const Trapezoid &right) {
    trapezoid_ = right.trapezoid_;
}

void Trapezoid::Print() {
    trapezoid_.Print();
}

void Trapezoid::AddPoint(const Point &a) {
    trapezoid_.AddPoint(a);
}

double Trapezoid::Perimetr() {
    trapezoid_.Perimetr();
}

double Trapezoid::Area() {
    this->trapezoid_.Area();
}
