#include <iostream>
#include "Polynomial.h"


void Polynomial::Print() {
    for (int i = 0; i < polynomial_.size(); i++){
        std::cout << polynomial_[i] << "  ";
    }
    std::cout<< std::endl;
}

const double Polynomial::Get(const int &n) {
    return polynomial_[n];
}

const double Polynomial::Set(const int& n,const double &a) {
    if (this->size() < n){
        this->polynomial_.resize(n);
    }
    polynomial_[n] = a;
}

const int Polynomial::size() {
    return polynomial_.size();
}

Polynomial& Polynomial::operator=(const Polynomial &right) {
    polynomial_ = right.polynomial_;
}

bool Polynomial::operator==(const Polynomial &right) {
    if (polynomial_ == right.polynomial_){
        return true;
    }
    else{
        return false;
    }
}

bool Polynomial::operator!=(const Polynomial &right) {
    if (polynomial_ != right.polynomial_){
        return true;
    }
    else{
        return false;
    }
}

Polynomial Polynomial::operator+(const Polynomial &right) {
    std::vector<double> temp;
    temp.resize(std::max(this->polynomial_.size(),right.polynomial_.size()));

    for (int i = 0; i < std::min(polynomial_.size(),right.polynomial_.size()); i++){
        temp[i] = this->polynomial_[i] + right.polynomial_[i];
    }

    return Polynomial(temp);
}

Polynomial Polynomial::operator-(const Polynomial &right) {
    std::vector<double> temp;
    temp.resize(std::max(this->polynomial_.size(),right.polynomial_.size()));

    for (int i = 0; i < std::min(polynomial_.size(),right.polynomial_.size()); i++){
        temp[i] = this->polynomial_[i] - right.polynomial_[i];
    }

    return Polynomial(temp);
}

Polynomial Polynomial::operator+=(const Polynomial &right) {
    for (int i = 0; i < std::min(polynomial_.size(),right.polynomial_.size()); i++){
        this->polynomial_[i] = this->polynomial_[i] + right.polynomial_[i];
    }
    return *this;
}

Polynomial Polynomial::operator-=(const Polynomial &right) {
    for (int i = 0; i < std::min(polynomial_.size(),right.polynomial_.size()); i++){
        this->polynomial_[i] = this->polynomial_[i] - right.polynomial_[i];
    }
    return *this;
}

Polynomial Polynomial::operator*(const double &a) {
    std::vector<double> temp;
    temp.resize(this->polynomial_.size());
    for(int i = 0; i < this->polynomial_.size(); i++){
        temp[i] = this->polynomial_[i] * a;
    }
    return Polynomial(temp);
}

Polynomial Polynomial::operator/(const double &a) {
    std::vector<double> temp;
    temp.resize(this->polynomial_.size());
    for(int i = 0; i < this->polynomial_.size(); i++){
        temp[i] = this->polynomial_[i] / a;
    }
    return Polynomial(temp);
}

Polynomial Polynomial::operator*=(const double &a) {
    for(int i = 0; i < this->polynomial_.size(); i++){
        this->polynomial_[i] = this->polynomial_[i] * a;
    }
    return *this;
}

Polynomial Polynomial::operator/=(const double &a) {
    for(int i = 0; i < this->polynomial_.size(); i++){
        this->polynomial_[i] = this->polynomial_[i] / a;
    }
    return *this;
}

void Polynomial::SetVector(const std::vector<double>& vect) {
    this->polynomial_ = vect;

}

double Polynomial::operator[](const int n) {
    if (n <= this->size()){
        return this->polynomial_[n];
    }
    else{
        std::cout<< "Out of range" << std::endl;
    }
}


std::ostream &operator<<(std::ostream &stream, Polynomial &polynomial) {
    stream << polynomial.Get(0);
    for (int i = 1; i < polynomial.size(); i++) {
        stream << " + " << polynomial.Get(i) << "x^" <<  i ;
    }
    stream << std::endl;
    return stream;
    }

std::istream &operator>>(std::istream &stream, Polynomial &polynomial) {
    int n;
    stream >> n;
    std::vector<double> temp;
    temp.resize(n);
    for (int i = 0; i < n; i++ ){
        stream >> temp[i];
    }
    polynomial.SetVector(temp);
    return stream;
};

