#include "Class_Point.h"
#include <cmath>

int Point::GetX(){
        return x_;
    }
    int Point::GetY(){
        return y_;
    }
    void Point::SetX(int x){
        x_ = x;
    }

    void Point::SetY(int y){
        y_ = y;
    }

    void Point::Print(){
        std::cout << "(" << x_ << "," <<y_<< ")"<< std::endl;
    }

//    bool Point::operator==(const Point &left, const Point &right);
//    bool Point::operator!=(const Point &left, const Point &right);

    Point& Point::operator=(const Point& right){
        this->x_ = right.x_;
        this->y_ = right.y_;
        return *this;
    }

    double Point::Dist(Point p1, Point p2) const {
    double dist;
    dist = abs((p1.x_ - p2.x_))*abs((p1.x_ - p2.x_)) + abs((p1.y_ - p2.y_))*abs((p1.y_ - p2.y_));
        return sqrt(dist);
}


//bool operator== (const Point &left, const Point &right) {
//    return (left.x_ == right.x_ && left.y_ == right.y_);
//}
//bool operator!= (const Point &left, const Point &right) {
//    return (left.x_ != right.x_ && left.y_ != right.y_);
//}

