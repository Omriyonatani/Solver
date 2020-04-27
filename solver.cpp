//
// Created by omri on 24/04/2020.
//

#include "solver.hpp"
#include <string>
#include <iostream>

using namespace std;
using namespace solver;

const RealVariable& operator- (const RealVariable& c1, const RealVariable& c2){
    return c1;
}
const RealVariable& operator- (const double c1, const RealVariable& c2){
    return c2;
}
const RealVariable& operator- (const RealVariable& c1, double c2){
    return c1;
}

const RealVariable& operator* (const RealVariable& c1, const RealVariable& c2){
    return c1;
}
const RealVariable& operator* (const double c1, const RealVariable& c2){
    return c2;
}
const RealVariable& operator* (const RealVariable& c1, const double c2){
    return c1;
}

const RealVariable& operator+ (const RealVariable& c1, const RealVariable& c2){
    return c1;
}
const RealVariable& operator+ (const double c1, const RealVariable& c2){
    return c2;
}
const RealVariable& operator+ (const RealVariable& c1, const double c2){
    return c1;
}

const RealVariable& operator==(const RealVariable& c1, const RealVariable& c2){
    return c1;
}
const RealVariable& operator==(const double c1, const RealVariable& c2){
    return c2;
}
const RealVariable& operator==(const RealVariable& c1, const double c2){
    return c1;
}

const RealVariable& operator/ (const RealVariable& c1, const RealVariable& c2){
    return c1;
}
const RealVariable& operator/ (const double c1, const RealVariable& c2){
    return c2;
}
const RealVariable& operator/ (const RealVariable& c1, const double c2){
    return c1;
}

const RealVariable& operator^ (const RealVariable& c1, const double c2){
    return c1;
}


ostream& operator<< (ostream& os, const RealVariable& c1){
    return os;
}





//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

const ComplexVariable& operator- (const ComplexVariable& c1, const ComplexVariable& c2){
    return c1;
}
const ComplexVariable& operator- (const double c1, const ComplexVariable& c2){
    return c2;
}
const ComplexVariable& operator- (const ComplexVariable& c1, double c2){
    return c1;
}

const ComplexVariable& operator* (const ComplexVariable& c1, const ComplexVariable& c2){
    return c1;
}
const ComplexVariable& operator* (const double c1, const ComplexVariable& c2){
    return c2;
}
const ComplexVariable& operator* (const ComplexVariable& c1, const double c2){
    return c1;
}

const ComplexVariable& operator+ (const ComplexVariable& c1, const ComplexVariable& c2){
    return c1;
}
const ComplexVariable& operator+ (const double c1, const ComplexVariable& c2){
    return c2;
}
const ComplexVariable& operator+ (const ComplexVariable& c1, const double c2){
    return c1;
}

const ComplexVariable& operator==(const ComplexVariable& c1, const ComplexVariable& c2){
    return c1;
}
const ComplexVariable& operator==(const double c1, const ComplexVariable& c2){
    return c2;
}
const ComplexVariable& operator==(const ComplexVariable& c1, const double c2){
    return c1;
}

const ComplexVariable& operator/ (const ComplexVariable& c1, const ComplexVariable& c2){
    return c1;
}
const ComplexVariable& operator/ (const double c1, const ComplexVariable& c2){
    return c2;
}
const ComplexVariable& operator/ (const ComplexVariable& c1, const double c2){
    return c1;
}

const ComplexVariable& operator^ (const ComplexVariable& c1, const double c2){
    return c1;
}


ostream& operator<< (ostream& os, const ComplexVariable& c1){
    return os;
}

double solve(const RealVariable& a){
    return 0;
}

complex<double> solve(const ComplexVariable& a){
    return 0;
}

