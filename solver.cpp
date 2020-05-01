//
// Created by omri on 24/04/2020.
//

#include "solver.hpp"
#include <complex>
#include <string>
#include <stdexcept>
#include <iostream>
#include <math.h>


using namespace std;
using namespace solver;


int main(){
    try{
    ComplexVariable x;
    ComplexVariable y(std::complex<double>(2,2),std::complex<double>(0,1),std::complex<double>(-1,3));
    ComplexVariable z(0,0,19);
    x=y*3-5i+3;
    cout<<"answer:"<<x.getA()<<" "<<x.getB()<<" "<<x.getC()<<endl;
    }
    catch(exception& e){
        cout<<"caught:"<<e.what()<<endl;
    }
    return 0;
}



// Real Variable:

// Operation Minus "-"
RealVariable& solver::operator-(RealVariable& x,RealVariable& y){
    RealVariable* temp=new RealVariable();
    rlist.push_back(temp);
    RealVariable& rtemp=*temp;
    rtemp.a=x.a-y.a;
    rtemp.b=x.b-y.b;
    rtemp.c=x.c-y.c;
    cout<<"Real-Real:"<<rtemp.getA()<<" "<<rtemp.getB()<<" "<<rtemp.getC()<<endl;
    return rtemp;
}
RealVariable& solver::operator-(double x,RealVariable& y){
    RealVariable* temp=new RealVariable();
    rlist.push_back(temp);
    RealVariable& rtemp=*temp;
    rtemp.a=-y.a;
    rtemp.b=-y.b;
    rtemp.c=x-y.c;
    cout<<"Double-Real:"<<rtemp.getA()<<" "<<rtemp.getB()<<" "<<rtemp.getC()<<endl;
    return rtemp;
}
RealVariable& solver::operator-(RealVariable& x,double y){
    RealVariable* temp=new RealVariable();
    rlist.push_back(temp);
    RealVariable& rtemp=*temp;
    rtemp.a=x.a;
    rtemp.b=x.b;
    rtemp.c=x.c-y;
    cout<<"Real-Double:"<<rtemp.getA()<<" "<<rtemp.getB()<<" "<<rtemp.getC()<<endl;
    return rtemp;

}

// Operation Multiply "*"
RealVariable& solver::operator*(RealVariable& x,RealVariable& y){
    if(x.a!=0){
        if(y.a!=0||y.b!=0) throw std::logic_error("Power cant be more than 2\n");
    }
    if(y.a!=0){
        if(x.a!=0||x.b!=0) throw std::logic_error("Power cant be more than 2\n");
    }
    RealVariable* temp=new RealVariable();
    rlist.push_back(temp);
    RealVariable& rtemp=*temp;
    rtemp.a=x.a*y.c+y.a*x.c+x.b*y.b;
    rtemp.b=x.b*y.c+y.b*x.c;
    rtemp.c=x.c*y.c;
    cout<<"Real*Real:"<<rtemp.getA()<<" "<<rtemp.getB()<<" "<<rtemp.getC()<<endl;
    return rtemp;


}
RealVariable& solver::operator*(double x,RealVariable& y){
    RealVariable* temp=new RealVariable();
    rlist.push_back(temp);
    RealVariable& rtemp=*temp;
    rtemp.a=x*y.a;
    rtemp.b=x*y.b;
    rtemp.c=x*y.c;
    cout<<"Double*Real:"<<rtemp.getA()<<" "<<rtemp.getB()<<" "<<rtemp.getC()<<endl;
    return rtemp;
}
RealVariable& solver::operator*(RealVariable& x,double y){
    RealVariable* temp=new RealVariable();
    rlist.push_back(temp);
    RealVariable& rtemp=*temp;
    rtemp.a=y*x.a;
    rtemp.b=y*x.b;
    rtemp.c=y*x.c;
    cout<<"Real*Double:"<<rtemp.getA()<<" "<<rtemp.getB()<<" "<<rtemp.getC()<<endl;
    return rtemp;
}

// Operation Plus "+"
RealVariable& solver::operator+(RealVariable& x,RealVariable& y){
    RealVariable* temp=new RealVariable();
    rlist.push_back(temp);
    RealVariable& rtemp=*temp;
    rtemp.a=y.a*x.a;
    rtemp.b=y.b*x.b;
    rtemp.c=y.c*x.c;
    cout<<"Real+Real:"<<rtemp.getA()<<" "<<rtemp.getB()<<" "<<rtemp.getC()<<endl;
    return rtemp;
}
RealVariable& solver::operator+(double x,RealVariable& y){
    RealVariable* temp=new RealVariable();
    rlist.push_back(temp);
    RealVariable& rtemp=*temp;
    rtemp.a=y.a;
    rtemp.b=y.b;
    rtemp.c=y.c+x;
    cout<<"double+Real:"<<rtemp.getA()<<" "<<rtemp.getB()<<" "<<rtemp.getC()<<endl;
    return rtemp;
}
RealVariable& solver::operator+(RealVariable& x,double y){
    RealVariable* temp=new RealVariable();
    rlist.push_back(temp);
    RealVariable& rtemp=*temp;
    rtemp.a=x.a;
    rtemp.b=x.b;
    rtemp.c=x.c+y;
    cout<<"Real+Double:"<<rtemp.getA()<<" "<<rtemp.getB()<<" "<<rtemp.getC()<<endl;
    return rtemp;
}

// Operation Equals "="
RealVariable& solver::operator==(RealVariable& x,RealVariable& y){
    RealVariable* temp=new RealVariable();
    rlist.push_back(temp);
    RealVariable& rtemp=*temp;
    rtemp.a=x.a-y.a;
    rtemp.b=x.b-y.b;
    rtemp.c=x.c-y.c;
    return rtemp;
}
RealVariable& solver::operator==(double x,RealVariable& y){
    RealVariable* temp=new RealVariable();
    rlist.push_back(temp);
    RealVariable& rtemp=*temp;
    rtemp.a=-(y.a);
    rtemp.b=-(y.b);
    rtemp.c=x-(y.c);
    return rtemp;
}
RealVariable& solver::operator==(RealVariable& x,double y){
    RealVariable* temp=new RealVariable();
    rlist.push_back(temp);
    RealVariable& rtemp=*temp;
    rtemp.a=x.a;
    rtemp.b=x.b;
    rtemp.c=x.c-y;
    return rtemp;
}

// Operaton Divide "/"
 RealVariable& solver::operator/(double x,RealVariable& y){
    RealVariable* temp=new RealVariable();
    rlist.push_back(temp);
    RealVariable& rtemp=*temp;
    rtemp.a = x/y.a;
    rtemp.b = x/y.b;
    rtemp.c = x/y.c;
    return rtemp;
}
 RealVariable& solver::operator/(RealVariable& x,double y){
    RealVariable* temp=new RealVariable();
    rlist.push_back(temp);
    RealVariable& rtemp=*temp;
    rtemp.a = x.a/y;
    rtemp.b = x.b/y;
    rtemp.c = x.c/y;
    return rtemp;
}

// Operation Power "^"
RealVariable& solver::operator^(RealVariable& x,double y){
    if(y>2){
        throw std::logic_error("The Power bigger than 2\n");
    }
    RealVariable* temp=new RealVariable(1,0,0);
    rlist.push_back(temp);
    RealVariable& rtemp=*temp;
    return rtemp;
}



// Complex Variable:

// Operation Minus "-"
ComplexVariable& solver::operator-(ComplexVariable& x,ComplexVariable& y){
    ComplexVariable* temp=new ComplexVariable();
    clist.push_back(temp);
    ComplexVariable& ctemp=*temp;
    ctemp.a=x.a-y.a;
    ctemp.b=x.b-y.b;
    ctemp.c=x.c-y.c;
    cout<<"Complex-Complex:"<<ctemp.getA()<<" "<<ctemp.getB()<<" "<<ctemp.getC()<<endl;
    return ctemp;
}
ComplexVariable& solver::operator-(const double x,ComplexVariable& y){
    ComplexVariable* temp=new ComplexVariable();
    clist.push_back(temp);
    ComplexVariable& ctemp=*temp;
    ctemp.a=-y.a;
    ctemp.b=-y.b;
    ctemp.c=x-y.c;
    cout<<"Double-Complex:"<<ctemp.getA()<<" "<<ctemp.getB()<<" "<<ctemp.getC()<<endl;
    return ctemp;
}
ComplexVariable& solver::operator-(ComplexVariable& x, double y){
    ComplexVariable* temp=new ComplexVariable();
    clist.push_back(temp);
    ComplexVariable& ctemp=*temp;
    ctemp.a=x.a;
    ctemp.b=x.b;
    ctemp.c=x.c-y;
    cout<<"Complex-Double:"<<ctemp.getA()<<" "<<ctemp.getB()<<" "<<ctemp.getC()<<endl;
    return ctemp;
}
ComplexVariable& solver::operator-(const complex<double> x,ComplexVariable& y){
    ComplexVariable* temp=new ComplexVariable();
    clist.push_back(temp);
    ComplexVariable& ctemp=*temp;
    ctemp.a=-y.a;
    ctemp.b=-y.b;
    ctemp.c=x-y.c;
    cout<<"std::complex-Complex:"<<ctemp.getA()<<" "<<ctemp.getB()<<" "<<ctemp.getC()<<endl;
    return ctemp;
}
ComplexVariable& solver::operator-(ComplexVariable& x, const complex<double> y){
    ComplexVariable* temp=new ComplexVariable();
    clist.push_back(temp);
    ComplexVariable& ctemp=*temp;
    ctemp.a=x.a;
    ctemp.b=x.b;
    ctemp.c=x.c-y;
    cout<<"Complex-std::complex:"<<ctemp.getA()<<" "<<ctemp.getB()<<" "<<ctemp.getC()<<endl;
    return ctemp;
}

// Operation Multiply "*"
ComplexVariable& solver::operator*(ComplexVariable& x,ComplexVariable& y){
    if(x.a!=std::complex<double>(0,0)){
        if(y.a!=std::complex<double>(0,0)||y.b!=std::complex<double>(0,0)) throw std::logic_error("Power cant be more than 2\n");
    }
    if(y.a!=std::complex<double>(0,0)){
        if(x.a!=std::complex<double>(0,0)||x.b!=std::complex<double>(0,0)) throw std::logic_error("Power cant be more than 2\n");
    }
    ComplexVariable* temp=new ComplexVariable();
    clist.push_back(temp);
    ComplexVariable& ctemp=*temp;
    ctemp.a=x.a*y.c+y.a*x.c+x.b*y.b;
    ctemp.b=x.b*y.c+y.b*x.c;
    ctemp.c=x.c*y.c;
    cout<<"Complex*Complex:"<<ctemp.getA()<<" "<<ctemp.getB()<<" "<<ctemp.getC()<<endl;
    return ctemp;
}
ComplexVariable& solver::operator*(double x,ComplexVariable& y){
    ComplexVariable* temp=new ComplexVariable();
    clist.push_back(temp);
    ComplexVariable& ctemp=*temp;
    ctemp.a=y.a*x;
    ctemp.b=y.b*x;
    ctemp.c=y.c*x;
    cout<<"Double*Complex:"<<ctemp.getA()<<" "<<ctemp.getB()<<" "<<ctemp.getC()<<endl;
    return ctemp;
}
ComplexVariable& solver::operator*(ComplexVariable& x,double y){
    ComplexVariable* temp=new ComplexVariable();
    clist.push_back(temp);
    ComplexVariable& ctemp=*temp;
    ctemp.a=x.a*y;
    ctemp.b=x.b*y;
    ctemp.c=x.c*y;
    cout<<"Complex*Double:"<<ctemp.getA()<<" "<<ctemp.getB()<<" "<<ctemp.getC()<<endl;
    return ctemp;
}
ComplexVariable& solver::operator*(complex<double> x,ComplexVariable& y){
    ComplexVariable* temp=new ComplexVariable();
    clist.push_back(temp);
    ComplexVariable& ctemp=*temp;
    ctemp.a=y.a*x;
    ctemp.b=y.b*x;
    ctemp.c=y.c*x;
    cout<<"std::complex*Complex:"<<ctemp.getA()<<" "<<ctemp.getB()<<" "<<ctemp.getC()<<endl;
    return ctemp;
}
ComplexVariable& solver::operator*(ComplexVariable& x,complex<double> y){
    ComplexVariable* temp=new ComplexVariable();
    clist.push_back(temp);
    ComplexVariable& ctemp=*temp;
    ctemp.a=x.a*y;
    ctemp.b=x.b*y;
    ctemp.c=x.c*y;
    cout<<"Complex*std::complex:"<<ctemp.getA()<<" "<<ctemp.getB()<<" "<<ctemp.getC()<<endl;
    return ctemp;
}

// Operation Plus "+"
ComplexVariable& solver::operator+(ComplexVariable& x,ComplexVariable& y){
    ComplexVariable* temp=new ComplexVariable();
    clist.push_back(temp);
    ComplexVariable& ctemp=*temp;
    ctemp.a=x.a+y.a;
    ctemp.b=x.b+y.b;
    ctemp.c=x.c+y.c;
    cout<<"Complex+Complex:"<<ctemp.getA()<<" "<<ctemp.getB()<<" "<<ctemp.getC()<<endl;
    return ctemp;
}
ComplexVariable& solver::operator+(double x,ComplexVariable& y){
    ComplexVariable* temp=new ComplexVariable();
    clist.push_back(temp);
    ComplexVariable& ctemp=*temp;
    ctemp.a=y.a;
    ctemp.b=y.b;
    ctemp.c=y.c+x;
    cout<<"Double+Complex:"<<ctemp.getA()<<" "<<ctemp.getB()<<" "<<ctemp.getC()<<endl;
    return ctemp;
}
ComplexVariable& solver::operator+(ComplexVariable& x,double y){
    ComplexVariable* temp=new ComplexVariable();
    clist.push_back(temp);
    ComplexVariable& ctemp=*temp;
    ctemp.a=x.a;
    ctemp.b=x.b;
    ctemp.c=x.c+y;
    cout<<"Complex+Double:"<<ctemp.getA()<<" "<<ctemp.getB()<<" "<<ctemp.getC()<<endl;
    return ctemp;
}
ComplexVariable& solver::operator+(complex<double> x,ComplexVariable& y){
    ComplexVariable* temp=new ComplexVariable();
    clist.push_back(temp);
    ComplexVariable& ctemp=*temp;
    ctemp.a=y.a;
    ctemp.b=y.b;
    ctemp.c=y.c+x;
    cout<<"std::complex+Complex:"<<ctemp.getA()<<" "<<ctemp.getB()<<" "<<ctemp.getC()<<endl;
    return ctemp;
}
ComplexVariable& solver::operator+(ComplexVariable& x,complex<double> y){
    ComplexVariable* temp=new ComplexVariable();
    clist.push_back(temp);
    ComplexVariable& ctemp=*temp;
    ctemp.a=x.a;
    ctemp.b=x.b;
    ctemp.c=x.c+y;
    cout<<"Complex+std::complex:"<<ctemp.getA()<<" "<<ctemp.getB()<<" "<<ctemp.getC()<<endl;
    return ctemp;
}

// Operation Equals "="
ComplexVariable& solver::operator==(ComplexVariable& x,ComplexVariable& y){
    ComplexVariable* temp=new ComplexVariable();
    clist.push_back(temp);
    ComplexVariable& ctemp=*temp;
    ctemp.a=x.a-y.a;
    ctemp.b=x.b-y.b;
    ctemp.c=x.c-y.c;
    return ctemp;
}
ComplexVariable& solver::operator==(double x,ComplexVariable& y){
    ComplexVariable* temp=new ComplexVariable();
    clist.push_back(temp);
    ComplexVariable& ctemp=*temp;
    ctemp.a=-(y.a);
    ctemp.b=-(y.b);
    ctemp.c=x-(y.c);
    return ctemp;
}
ComplexVariable& solver::operator==(ComplexVariable& x,double y){
    ComplexVariable* temp=new ComplexVariable();
    clist.push_back(temp);
    ComplexVariable& ctemp=*temp;
    ctemp.a=x.a;
    ctemp.b=x.b;
    ctemp.c=x.c-y;
    return ctemp;
}
ComplexVariable& solver::operator==(complex<double> x,ComplexVariable& y){
    ComplexVariable* temp=new ComplexVariable();
    clist.push_back(temp);
    ComplexVariable& ctemp=*temp;
    ctemp.a = -(y.a);
    ctemp.b = -(y.b);
    ctemp.c = x-(y.c);
    return ctemp;
}
ComplexVariable& solver::operator==(ComplexVariable& x,complex<double> y){
    ComplexVariable* temp=new ComplexVariable();
    clist.push_back(temp);
    ComplexVariable& ctemp=*temp;
    ctemp.a = x.a;
    ctemp.b = x.b;
    ctemp.c = x.c-y;
    return ctemp;
}


// Operation Divide "/"
 ComplexVariable& solver::operator/(double x,ComplexVariable& y){
    ComplexVariable* temp=new ComplexVariable();
    clist.push_back(temp);
    ComplexVariable& ctemp=*temp;
    if(y.equals(ComplexVariable(0,0,0))){
        throw std::logic_error("Zero Divide Error\n");
    }
     ctemp.a = x/y.a;
     ctemp.b = x/y.b;
     ctemp.c = x/y.c;
    return ctemp;
}
 ComplexVariable& solver::operator/(ComplexVariable& x,double y){
    ComplexVariable* temp=new ComplexVariable();
    clist.push_back(temp);
    ComplexVariable& ctemp=*temp;
    if(y==0){
        throw std::logic_error("Zero Divide Error\n");
    }
     ctemp.a = x.a/y;
     ctemp.b = x.b/y;
     ctemp.c = x.c/y;
    return ctemp;
}
 ComplexVariable& solver::operator/(complex<double> x,ComplexVariable& y){
    ComplexVariable* temp=new ComplexVariable();
    clist.push_back(temp);
    ComplexVariable& ctemp=*temp;
    if(y.equals(ComplexVariable(0,0,0))){
        throw std::logic_error("Zero Divide Error\n");
    }
     ctemp.a = x/y.a;
     ctemp.b = x/y.b;
     ctemp.c = x/y.c;
    return ctemp;
}
 ComplexVariable& solver::operator/(ComplexVariable& x,complex<double> y){
    ComplexVariable* temp=new ComplexVariable();
    clist.push_back(temp);
    ComplexVariable& ctemp=*temp;
    if(y.imag()==0 && y.real()==0){
        throw std::logic_error("Zero Divide Error\n");
    }
     ctemp.a = x.a/y;
     ctemp.b = x.b/y;
     ctemp.c = x.c/y;
    return ctemp;
}

// Operation Power "*"
ComplexVariable& solver::operator^(ComplexVariable& x,double y){
    if(y>2){
        throw std::logic_error("The Power bigger than 2\n");
    }
    ComplexVariable* temp=new ComplexVariable(1,0,0);
    clist.push_back(temp);
    ComplexVariable& ctemp=*temp;
    return ctemp;
}

bool ComplexVariable::equals(ComplexVariable x){
    if((this->getA().imag()!=x.getA().imag())||(this->getA().real()!=x.getA().real())){
        return false;
    }
    if((this->getB().imag()!=x.getB().imag())||(this->getB().real()!=x.getB().real())){
        return false;
    }  
    if((this->getC().imag()!=x.getC().imag())||(this->getC().real()!=x.getC().real())){
        return false;
    }
    return true;  
}

bool RealVariable::equals(RealVariable x){
    if((this->getA()!=x.getA())||(this->getB()!=x.getB())||(this->getC()!=x.getC())){
        return false;
    }
    return true;  
}
 
// Solve Functios:
double solver::solve(RealVariable& a){
    if(a.getA()==0){
        return (-a.getC())/a.getB();
    }
    double sqrt = (a.getA()*a.getA()) - 4 * a.getA() * a.getC();
    if(sqrt < 0){
        throw std::logic_error("There is no real solution to the equation\n");
    }
    double res = ((-a.getC())+sqrtl(sqrt))/(2*a.getA());
    return res;
}

complex<double> solver::solve(ComplexVariable& a){
    return 0;
}