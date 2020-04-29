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
        double a,b,c;
    public:
        
        RealVariable():a(0),b(0),c(0){};

        RealVariable(double a,double b,double c){
            this->a=a;
            this->b=b;
            this->c=c;
        }

        double getA(){
            return this->a;
        }

        double getB(){
            return this->b;
        }

        double getC(){
            return this->c;
        }
        
        friend RealVariable& operator-(RealVariable& x,RealVariable& y);
        friend RealVariable& operator-(const double x,RealVariable& y);
        friend RealVariable& operator-(RealVariable& x, const double y);


        friend const RealVariable& operator*(const RealVariable& x, const RealVariable& y);
        friend const RealVariable& operator*(const double x, const RealVariable& y);
        friend const RealVariable& operator*(const RealVariable& x, const double y);

        friend const RealVariable& operator+(const RealVariable& x, const RealVariable& y);
        friend const RealVariable& operator+(const double x, const RealVariable& y);
        friend const RealVariable& operator+(const RealVariable& x, const double y);
        

        friend const RealVariable& operator==(const RealVariable& x, const RealVariable& y);
        friend const RealVariable& operator==(const double x, const RealVariable& y);
        friend const RealVariable& operator==(const RealVariable& x, const double y);

        friend const RealVariable& operator/(const RealVariable& x, const RealVariable& y);
        friend const RealVariable& operator/(const double x, const RealVariable& y);
        friend const RealVariable& operator/(const RealVariable& x, const double y);

        friend const RealVariable& operator^(const RealVariable& x, const double y);


        friend ostream& operator<<(ostream& os, const RealVariable& x);



    };

    class ComplexVariable{
        std::complex<double> a,b,c;
    public:
        
        ComplexVariable():a(complex<double>(0,0)),b(complex<double>(0,0)),c(complex<double>(0,0)){};

        ComplexVariable(std::complex<double> a,std::complex<double> b,std::complex<double> c){
            this->a=a;
            this->b=b;
            this->c=c;
        }

        std::complex<double> getA(){
            return this->a;
        }

        std::complex<double> getB(){
            return this->b;
        }

        std::complex<double> getC(){
            return this->c;
        }

        friend const ComplexVariable& operator-(const ComplexVariable& x, const ComplexVariable& y);
        friend const ComplexVariable& operator-(const double x, const ComplexVariable& y);
        friend const ComplexVariable& operator-(const ComplexVariable& x, const double y);
        friend const ComplexVariable& operator-(const complex<double>& x, const ComplexVariable& y);
        friend const ComplexVariable& operator-(const ComplexVariable& x, const complex<double>& y);


        friend const ComplexVariable& operator*(const ComplexVariable& x, const ComplexVariable& y);
        friend const ComplexVariable& operator*(const double x, const ComplexVariable& y);
        friend const ComplexVariable& operator*(const ComplexVariable& x, double y);
        friend const ComplexVariable& operator*(const complex<double>& x, const ComplexVariable& y);
        friend const ComplexVariable& operator*(const ComplexVariable& x, const complex<double>& y);

        friend const ComplexVariable& operator+(const ComplexVariable& x, const ComplexVariable& y);
        friend const ComplexVariable& operator+(const double x, const ComplexVariable& y);
        friend const ComplexVariable& operator+(const ComplexVariable& x, double y);
        friend const ComplexVariable& operator+(const complex<double>& x, const ComplexVariable& y);
        friend const ComplexVariable& operator+(const ComplexVariable& x, const complex<double>& y);


        friend const ComplexVariable& operator==(const ComplexVariable& x, const ComplexVariable& y);
        friend const ComplexVariable& operator==(const double x, const ComplexVariable& y);
        friend const ComplexVariable& operator==(const ComplexVariable& x, double y);
        friend const ComplexVariable& operator==(const complex<double>& x, const ComplexVariable& y);
        friend const ComplexVariable& operator==(const ComplexVariable& x, const complex<double>& y);

        friend const ComplexVariable& operator/(const ComplexVariable& x, const ComplexVariable& y);
        friend const ComplexVariable& operator/(const double x, const ComplexVariable& y);
        friend const ComplexVariable& operator/(const ComplexVariable& x, double y);
        friend const ComplexVariable& operator/(const complex<double>& x, const ComplexVariable& y);
        friend const ComplexVariable& operator/(const ComplexVariable& x, const complex<double>& y);

        friend const ComplexVariable& operator^(const ComplexVariable& x, const double y);


        friend ostream& operator<<(ostream& os, const ComplexVariable& x);

    };

    double solve(const RealVariable& a);

    complex<double> solve(const ComplexVariable& a);

}


#endif //EX3_SOLVER_SOLVER_H
