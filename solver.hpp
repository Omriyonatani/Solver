//
// Created by omri on 24/04/2020.
//

#ifndef EX3_SOLVER_SOLVER_H
#define EX3_SOLVER_SOLVER_H

#include <string>
#include <iostream>
#include <complex>


using namespace std;

namespace solver{
    double solve(const istream& input);
    std::complex solve(const istream& input);

    class RealVariable{
    public:
        double x;
        RealVariable(){};
        istream& RealVariable::operator>> (istream& input);
    };

    class ComplexVariable{
    public:
        std::complex<double> y;
        ComplexVariable(){};



    };

}


#endif //EX3_SOLVER_SOLVER_H
