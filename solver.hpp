//
// Created by omri on 24/04/2020.
//
#pragma once
#ifndef EX3_SOLVER_SOLVER_H
#define EX3_SOLVER_SOLVER_H

#include <string>
#include <iostream>
#include <complex>


using namespace std;

namespace solver{


    class RealVariable{
    public:
        double x;
        RealVariable(){};
        
        friend const RealVariable& operator- (const RealVariable& c1, const RealVariable& c2);
        friend const RealVariable& operator- (const double c1, const RealVariable& c2);
        friend const RealVariable& operator- (const RealVariable& c1, double c2);

        friend const RealVariable& operator* (const RealVariable& c1, const RealVariable& c2);
        friend const RealVariable& operator* (const double c1, const RealVariable& c2);
        friend const RealVariable& operator* (const RealVariable& c1, const double c2);

        friend const RealVariable& operator+ (const RealVariable& c1, const RealVariable& c2);
        friend const RealVariable& operator+ (const double c1, const RealVariable& c2);
        friend const RealVariable& operator+ (const RealVariable& c1, const double c2);

        friend const RealVariable& operator==(const RealVariable& c1, const RealVariable& c2);
        friend const RealVariable& operator==(const double c1, const RealVariable& c2);
        friend const RealVariable& operator==(const RealVariable& c1, const double c2);

        friend const RealVariable& operator/ (const RealVariable& c1, const RealVariable& c2);
        friend const RealVariable& operator/ (const double c1, const RealVariable& c2);
        friend const RealVariable& operator/ (const RealVariable& c1, const double c2);

        friend const RealVariable& operator^ (const RealVariable& c1, const double c2);


        friend ostream& operator<< (ostream& os, const RealVariable& c1);



    };

    class ComplexVariable{
    public:
        std::complex<double> y;
        ComplexVariable(){};

        friend const ComplexVariable& operator- (const ComplexVariable& c1, const ComplexVariable& c2);
        friend const ComplexVariable& operator- (const double c1, const ComplexVariable& c2);
        friend const ComplexVariable& operator- (const ComplexVariable& c1, double c2);
        friend const ComplexVariable& operator- (const complex<double>& c1, const ComplexVariable& c2);
        friend const ComplexVariable& operator- (const ComplexVariable& c1, const complex<double>& c2);


        friend const ComplexVariable& operator* (const ComplexVariable& c1, const ComplexVariable& c2);
        friend const ComplexVariable& operator* (const double c1, const ComplexVariable& c2);
        friend const ComplexVariable& operator* (const ComplexVariable& c1, double c2);
        friend const ComplexVariable& operator* (const complex<double>& c1, const ComplexVariable& c2);
        friend const ComplexVariable& operator* (const ComplexVariable& c1, const complex<double>& c2);

        friend const ComplexVariable& operator+ (const ComplexVariable& c1, const ComplexVariable& c2);
        friend const ComplexVariable& operator+ (const double c1, const ComplexVariable& c2);
        friend const ComplexVariable& operator+ (const ComplexVariable& c1, double c2);
        friend const ComplexVariable& operator+ (const complex<double>& c1, const ComplexVariable& c2);
        friend const ComplexVariable& operator+ (const ComplexVariable& c1, const complex<double>& c2);

        friend const ComplexVariable& operator==(const ComplexVariable& c1, const ComplexVariable& c2);
        friend const ComplexVariable& operator==(const double c1, const ComplexVariable& c2);
        friend const ComplexVariable& operator==(const ComplexVariable& c1, double c2);
        friend const ComplexVariable& operator==(const complex<double>& c1, const ComplexVariable& c2);
        friend const ComplexVariable& operator==(const ComplexVariable& c1, const complex<double>& c2);

        friend const ComplexVariable& operator/ (const ComplexVariable& c1, const ComplexVariable& c2);
        friend const ComplexVariable& operator/ (const double c1, const ComplexVariable& c2);
        friend const ComplexVariable& operator/ (const ComplexVariable& c1, double c2);
        friend const ComplexVariable& operator/ (const complex<double>& c1, const ComplexVariable& c2);
        friend const ComplexVariable& operator/ (const ComplexVariable& c1, const complex<double>& c2);

        friend const ComplexVariable& operator^ (const ComplexVariable& c1, const double c2);


        friend ostream& operator<< (ostream& os, const ComplexVariable& c1);

    };

    double solve(const RealVariable& a);

    complex<double> solve(const ComplexVariable& a);

}


#endif //EX3_SOLVER_SOLVER_H
