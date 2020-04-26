//
// Created by omri on 24/04/2020.
//

#include "solver.hpp"
#include <string>
#include <iostream>
#include <complex>

using namespace std;
using solver::solve, solver::RealVariable, solver::ComplexVariable;



double solve(const istream& input){
    double d;
    return d;
}




std::complex solve(const istream& input){
    complex c;
    return c;
}





istream& getAndCheckNextCharIs(istream& input, char expectedChar) {
    char actualChar;
    input >> actualChar;
    if (!input) return input;   // no input
    if (actualChar!=expectedChar) {
        input.setstate(ios::failbit);
    }
    return input;
}

istream& RealVariable::operator>> (istream& input){
    double new_re;

    // remember place for rewinding
    ios::pos_type startPosition = input.tellg();

    if ((!(input >> new_re)) || (!getAndCheckNextCharIs(input,'+')) || (!getAndCheckNextCharIs(input,'-'))){

        // rewind on error
        auto errorState = input.rdstate(); // remember error state
        input.clear(); // clear error so seekg will work
        input.seekg(startPosition); // rewind
        input.clear(errorState); // set back the error flag
    } else {
        c._re = new_re;
    }
    return input;
}
