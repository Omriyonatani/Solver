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

 RealVariable& solver::operator*( RealVariable& x,  RealVariable& y){
    return x;
}
 RealVariable& solver::operator*( double x,  RealVariable& y){
    return y;
}
 RealVariable& solver::operator*( RealVariable& x,  double y){
    return x;
}

 RealVariable& solver::operator+( RealVariable& x,  RealVariable& y){
    return x;
}
 RealVariable& solver::operator+( double x,  RealVariable& y){
    return y;
}
 RealVariable& solver::operator+( RealVariable& x,  double y){
    return x;
}


 RealVariable& solver::operator==( RealVariable& x,  RealVariable& y){
    return x;

}
 RealVariable& solver::operator==( double x,  RealVariable& y){
    return y;
}
 RealVariable& solver::operator==( RealVariable& x,  double y){
    return x;
}

 RealVariable& solver::operator/( RealVariable& x,  RealVariable& y){
    return x;
}
 RealVariable& solver::operator/( double x,  RealVariable& y){
    return y;
}
 RealVariable& solver::operator/( RealVariable& x,  double y){
    return x;
}

 RealVariable& solver::operator^( RealVariable& x,  double y){
    return x;
}


ostream& solver::operator<< (ostream& os,  RealVariable& x){
    return os;
}





//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

 ComplexVariable& solver::operator-( ComplexVariable& x,  ComplexVariable& y){
    return x;
}
 ComplexVariable& solver::operator-( double x,  ComplexVariable& y){
    return y;
}
 ComplexVariable& solver::operator-( ComplexVariable& x, double y){
    return x;
}
 ComplexVariable& solver::operator-( complex<double>& x,  ComplexVariable& y){
        return y;
}
 ComplexVariable& solver::operator-( ComplexVariable& x,  complex<double>& y){
    return x;
}




 ComplexVariable& solver::operator*( ComplexVariable& x,  ComplexVariable& y){
    return x;
}
 ComplexVariable& solver::operator*( double x,  ComplexVariable& y){
    return y;
}
 ComplexVariable& solver::operator*( ComplexVariable& x,  double y){
    return x;
}




 ComplexVariable& solver::operator+( ComplexVariable& x,  ComplexVariable& y){
    return x;
}
 ComplexVariable& solver::operator+( double x,  ComplexVariable& y){
    return y;
}
 ComplexVariable& solver::operator+( ComplexVariable& x,  double y){
    return x;
}
 ComplexVariable& solver::operator+( complex<double>& x,  ComplexVariable& y){
    return y;
}
 ComplexVariable& solver::operator+( ComplexVariable& x,  complex<double>& y){
    return x;
}




 ComplexVariable& solver::operator==( ComplexVariable& x,  ComplexVariable& y){
    return x;
}
 ComplexVariable& solver::operator==( double x,  ComplexVariable& y){
    return y;
}
 ComplexVariable& solver::operator==( ComplexVariable& x,  double y){
    return x;
}

 ComplexVariable& solver::operator==( complex<double>& x,  ComplexVariable& y){
    return y;
}
 ComplexVariable& solver::operator==( ComplexVariable& x,  complex<double>& y){
    return x;
}



 ComplexVariable& solver::operator/( ComplexVariable& x,  ComplexVariable& y){
    return x;
}
 ComplexVariable& solver::operator/( double x,  ComplexVariable& y){
    return y;
}
 ComplexVariable& solver::operator/( ComplexVariable& x,  double y){
    return x;
}

 ComplexVariable& solver::operator^( ComplexVariable& x,  double y){
    return x;
}


ostream& solver::operator<<(ostream& os,  ComplexVariable& x){
    return os;
}

double solver::solve( RealVariable& a){
    return 0;
}

complex<double> solver::solve( ComplexVariable& a){
    return 0;
}

