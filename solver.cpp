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
   RealVariable y(1,2,-3);
   RealVariable z(-4,7,19);
   x=y-5-z;
   cout<<x.getA()<<" "<<x.getB()<<" "<<x.getC()<<endl;
   return 0;
}

RealVariable& solver::operator-(RealVariable& x,RealVariable& y){
    x.a=x.a-y.a;
    x.b=x.b-y.b;
    x.c=x.c-y.c;
    return x;
}
RealVariable& solver::operator-(double x,RealVariable& y){
    y.a=-y.a;
    y.b=-y.b;
    y.c=x-y.c;
    return y;
}
RealVariable& solver::operator-(RealVariable& x,double y){
    x.c=x.c-y;
    return x;
}

const RealVariable& solver::operator*(const RealVariable& x, const RealVariable& y){
    return x;
}
const RealVariable& solver::operator*(const double x, const RealVariable& y){
    return y;
}
const RealVariable& solver::operator*(const RealVariable& x, const double y){
    return x;
}

const RealVariable& solver::operator+(const RealVariable& x, const RealVariable& y){
    return x;
}
const RealVariable& solver::operator+(const double x, const RealVariable& y){
    return y;
}
const RealVariable& solver::operator+(const RealVariable& x, const double y){
    return x;
}


const RealVariable& solver::operator==(const RealVariable& x, const RealVariable& y){
    return x;

}
const RealVariable& solver::operator==(const double x, const RealVariable& y){
    return y;
}
const RealVariable& solver::operator==(const RealVariable& x, const double y){
    return x;
}

const RealVariable& solver::operator/(const RealVariable& x, const RealVariable& y){
    return x;
}
const RealVariable& solver::operator/(const double x, const RealVariable& y){
    return y;
}
const RealVariable& solver::operator/(const RealVariable& x, const double y){
    return x;
}

const RealVariable& solver::operator^(const RealVariable& x, const double y){
    return x;
}


ostream& solver::operator<< (ostream& os, const RealVariable& x){
    return os;
}





//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

const ComplexVariable& solver::operator-(const ComplexVariable& x, const ComplexVariable& y){
    return x;
}
const ComplexVariable& solver::operator-(const double x, const ComplexVariable& y){
    return y;
}
const ComplexVariable& solver::operator-(const ComplexVariable& x, double y){
    return x;
}
const ComplexVariable& solver::operator-(const complex<double>& x, const ComplexVariable& y){
        return y;
}
const ComplexVariable& solver::operator-(const ComplexVariable& x, const complex<double>& y){
    return x;
}




const ComplexVariable& solver::operator*(const ComplexVariable& x, const ComplexVariable& y){
    return x;
}
const ComplexVariable& solver::operator*(const double x, const ComplexVariable& y){
    return y;
}
const ComplexVariable& solver::operator*(const ComplexVariable& x, const double y){
    return x;
}




const ComplexVariable& solver::operator+(const ComplexVariable& x, const ComplexVariable& y){
    return x;
}
const ComplexVariable& solver::operator+(const double x, const ComplexVariable& y){
    return y;
}
const ComplexVariable& solver::operator+(const ComplexVariable& x, const double y){
    return x;
}
const ComplexVariable& solver::operator+(const complex<double>& x, const ComplexVariable& y){
    return y;
}
const ComplexVariable& solver::operator+(const ComplexVariable& x, const complex<double>& y){
    return x;
}




const ComplexVariable& solver::operator==(const ComplexVariable& x, const ComplexVariable& y){
    return x;
}
const ComplexVariable& solver::operator==(const double x, const ComplexVariable& y){
    return y;
}
const ComplexVariable& solver::operator==(const ComplexVariable& x, const double y){
    return x;
}

const ComplexVariable& solver::operator==(const complex<double>& x, const ComplexVariable& y){
    return y;
}
const ComplexVariable& solver::operator==(const ComplexVariable& x, const complex<double>& y){
    return x;
}



const ComplexVariable& solver::operator/(const ComplexVariable& x, const ComplexVariable& y){
    return x;
}
const ComplexVariable& solver::operator/(const double x, const ComplexVariable& y){
    return y;
}
const ComplexVariable& solver::operator/(const ComplexVariable& x, const double y){
    return x;
}

const ComplexVariable& solver::operator^(const ComplexVariable& x, const double y){
    return x;
}


ostream& solver::operator<<(ostream& os, const ComplexVariable& x){
    return os;
}

double solver::solve(const RealVariable& a){
    return 0;
}

complex<double> solver::solve(const ComplexVariable& a){
    return 0;
}

