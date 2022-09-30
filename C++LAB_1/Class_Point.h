#ifndef C__LAB_1_CLASS_POINT_H
#define C__LAB_1_CLASS_POINT_H
#include <iostream>
#include <cmath>
class Point{
private:
    int x_;
    int y_;
public:
    Point(){
        x_ = 0;
        y_ = 0;
    }
    Point(int x, int y){
        x_ = x;
        y_ = y;
    }

//    Point( const Point &copy):
//            x_(copy.x_), y_(copy.y_)
//    {std::cout << "Copy constructor worked here!\n";}
    Point(const Point &copy){
        x_ = copy.x_;
        y_ = copy.y_;
    }

    int GetX();
    int GetY();
    void SetX(int x);

    void SetY(int y);

    void Print();

    friend bool operator==(const Point &left, const Point &right);
    friend bool operator!=(const Point &left, const Point &right);

    Point& operator=(const Point& right);

    double Dist(Point p1, Point p2) const;
};


#endif
