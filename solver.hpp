//
// Created by omri on 24/04/2020.
//

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
        friend RealVariable& operator-( double x,RealVariable& y);
        friend RealVariable& operator-(RealVariable& x,  double y);


        friend  RealVariable& operator*( RealVariable& x,  RealVariable& y);
        friend  RealVariable& operator*( double x,  RealVariable& y);
        friend  RealVariable& operator*( RealVariable& x,  double y);

        friend  RealVariable& operator+( RealVariable& x,  RealVariable& y);
        friend  RealVariable& operator+( double x,  RealVariable& y);
        friend  RealVariable& operator+( RealVariable& x,  double y);
        

        friend  RealVariable& operator==( RealVariable& x,  RealVariable& y);
        friend  RealVariable& operator==( double x,  RealVariable& y);
        friend  RealVariable& operator==( RealVariable& x,  double y);

        friend  RealVariable& operator/( RealVariable& x,  RealVariable& y);
        friend  RealVariable& operator/( double x,  RealVariable& y);
        friend  RealVariable& operator/( RealVariable& x,  double y);

        friend  RealVariable& operator^( RealVariable& x,  double y);

        friend ostream& operator<<(ostream& os,  RealVariable& x);

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

        friend  ComplexVariable& operator-( ComplexVariable& x,  ComplexVariable& y);
        friend  ComplexVariable& operator-( double x,  ComplexVariable& y);
        friend  ComplexVariable& operator-( ComplexVariable& x,  double y);
        friend  ComplexVariable& operator-( complex<double> x,  ComplexVariable& y);
        friend  ComplexVariable& operator-( ComplexVariable& x,  complex<double> y);


        friend  ComplexVariable& operator*( ComplexVariable& x,  ComplexVariable& y);
        friend  ComplexVariable& operator*( double x,  ComplexVariable& y);
        friend  ComplexVariable& operator*( ComplexVariable& x, double y);
        friend  ComplexVariable& operator*( complex<double> x,  ComplexVariable& y);
        friend  ComplexVariable& operator*( ComplexVariable& x,  complex<double> y);

        friend  ComplexVariable& operator+( ComplexVariable& x,  ComplexVariable& y);
        friend  ComplexVariable& operator+( double x,  ComplexVariable& y);
        friend  ComplexVariable& operator+( ComplexVariable& x, double y);
        friend  ComplexVariable& operator+( complex<double> x,  ComplexVariable& y);
        friend  ComplexVariable& operator+( ComplexVariable& x,  complex<double> y);


        friend  ComplexVariable& operator==( ComplexVariable& x,  ComplexVariable& y);
        friend  ComplexVariable& operator==( double x,  ComplexVariable& y);
        friend  ComplexVariable& operator==( ComplexVariable& x, double y);
        friend  ComplexVariable& operator==( complex<double> x,  ComplexVariable& y);
        friend  ComplexVariable& operator==( ComplexVariable& x ,complex<double> y);

        friend  ComplexVariable& operator/( ComplexVariable& x,  ComplexVariable& y);
        friend  ComplexVariable& operator/( double x,  ComplexVariable& y);
        friend  ComplexVariable& operator/( ComplexVariable& x, double y);
        friend  ComplexVariable& operator/( complex<double> x,  ComplexVariable& y);
        friend  ComplexVariable& operator/( ComplexVariable& x,  complex<double> y);

        friend  ComplexVariable& operator^( ComplexVariable& x,  double y);

        friend ostream& operator<<(ostream& os,  ComplexVariable& x);

    };

    double solve( RealVariable& a);
    complex<double> solve( ComplexVariable& a);
}
