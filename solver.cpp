//
// Created by omri on 24/04/2020.
//

#include "solver.hpp"
#include <complex>
#include <string>
#include <iostream>

using namespace std;
using namespace solver;

int main(){
    RealVariable x;
    cout << solve(2*x-4 == 10) << endl;  // 7
}

const RealVariable& solver::operator-(const RealVariable& c1, const RealVariable& c2){
    return c1;
}
const RealVariable& solver::operator-(const double c1, const RealVariable& c2){
    return c2;
}
const RealVariable& solver::operator-(const RealVariable& c1, const double c){
    return c1;
}

const RealVariable& solver::operator* (const RealVariable& c1, const RealVariable& c2){
    return c1;
}
const RealVariable& solver::operator* (const RealVariable& c2){
    return c2;
}
const RealVariable& solver::operator* (const RealVariable& c1, const double c2){
    return c1;
}

const RealVariable& solver::operator+ (const RealVariable& c1, const RealVariable& c2){
    return c1;
}
const RealVariable& solver::operator+ (const double c1, const RealVariable& c2){
    return c2;
}
const RealVariable& solver::operator+ (const RealVariable& c1, const double c2){
    return c1;
}

const RealVariable& solver::operator==(const RealVariable& c1, const RealVariable& c2){
    return c1;
}
const RealVariable& solver::operator==(const double c1, const RealVariable& c2){
    return c2;
}
const RealVariable& solver::operator==(const RealVariable& c1, const double c2){
    return c1;
}

const RealVariable& solver::operator/ (const RealVariable& c1, const RealVariable& c2){
    return c1;
}
const RealVariable& solver::operator/ (const double c1, const RealVariable& c2){
    return c2;
}
const RealVariable& solver::operator/ (const RealVariable& c1, const double c2){
    return c1;
}

const RealVariable& solver::operator^ (const RealVariable& c1, const double c2){
    return c1;
}


ostream& solver::operator<< (ostream& os, const RealVariable& c1){
    return os;
}





//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

const ComplexVariable& solver::operator- (const ComplexVariable& c1, const ComplexVariable& c2){
    return c1;
}
const ComplexVariable& solver::operator- (const double c1, const ComplexVariable& c2){
    return c2;
}
const ComplexVariable& solver::operator- (const ComplexVariable& c1, double c2){
    return c1;
}

const ComplexVariable& solver::operator*(const ComplexVariable& c1, const ComplexVariable& c2){
    return c1;
}
const ComplexVariable& solver::operator*(const double c1, const ComplexVariable& c2){
    return c2;
}
const ComplexVariable& solver::operator*(const ComplexVariable& c1, const double c2){
    return c1;
}

const ComplexVariable& solver::operator+(const ComplexVariable& c1, const ComplexVariable& c2){
    return c1;
}
const ComplexVariable& solver::operator+ (const double c1, const ComplexVariable& c2){
    return c2;
}
const ComplexVariable& solver::operator+ (const ComplexVariable& c1, const double c2){
    return c1;
}

const ComplexVariable& solver::operator==(const ComplexVariable& c1, const ComplexVariable& c2){
    return c1;
}
const ComplexVariable& solver::operator==(const double c1, const ComplexVariable& c2){
    return c2;
}
const ComplexVariable& solver::operator==(const ComplexVariable& c1, const double c2){
    return c1;
}

const ComplexVariable& solver::operator/ (const ComplexVariable& c1, const ComplexVariable& c2){
    return c1;
}
const ComplexVariable& solver::operator/ (const double c1, const ComplexVariable& c2){
    return c2;
}
const ComplexVariable& solver::operator/ (const ComplexVariable& c1, const double c2){
    return c1;
}

const ComplexVariable& solver::operator^ (const ComplexVariable& c1, const double c2){
    return c1;
}


ostream& solver::operator<< (ostream& os, const ComplexVariable& c1){
    return os;
}

double solver::solve(const RealVariable& a){
    return 0;
}

complex<double> solver::solve(const ComplexVariable& a){
    return 0;
}

