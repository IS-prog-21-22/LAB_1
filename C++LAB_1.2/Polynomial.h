#ifndef C__LAB_1_2_POLYNOMIAL_H
#define C__LAB_1_2_POLYNOMIAL_H
#include <vector>

class Polynomial {
private:
    std::vector<double> polynomial_;
public:
    Polynomial(){
        polynomial_.push_back(0);
    }

    Polynomial(std::vector<double> vector){
        polynomial_ = vector;
    }

    Polynomial(const Polynomial& copy){
        polynomial_ = copy.polynomial_;
    }

    ~Polynomial(){

    }

    const double Get(const int& n);

    const double Set(const int& n,const double& a);

    const int size();

    void SetVector(const std::vector<double>& vect);

    Polynomial& operator=(const Polynomial& right);

    bool operator==(const Polynomial& right);

    bool operator!=(const Polynomial& right);

    Polynomial operator+(const Polynomial& right);

    Polynomial operator-(const Polynomial& right);

    Polynomial operator+=(const Polynomial& right);

    Polynomial operator-=(const Polynomial& right);

    Polynomial operator*(const double& a);

    Polynomial operator/(const double& a);

    Polynomial operator*=(const double& a);

    Polynomial operator/=(const double& a);

    double operator[](const int n);




    void Print();

};
std::ostream& operator<<(std::ostream& stream, Polynomial& polynomial);

std::istream& operator>>(std::istream& stream, Polynomial& polynomial);


#endif //C__LAB_1_2_POLYNOMIAL_H
